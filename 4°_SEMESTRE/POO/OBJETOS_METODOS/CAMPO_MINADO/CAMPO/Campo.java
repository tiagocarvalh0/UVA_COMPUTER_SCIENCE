package CAMPO;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Random;

import CELULA.Celula;

public class Campo {

    private Celula[][] campo = new Celula[9][9]; 
    private Random rand = new Random();

    public Campo() {}

    public Celula[][] getCampo() {
        for(int i = 0; i < 9; i++) {
            for(int x = 0; x < 9; x++) {
                campo[i][x] = new Celula();
            }
        }
        for(int i = 0; i < 9; i++) {
            int x = rand.nextInt(8);
            int y = rand.nextInt(8);
            campo[x][y].setIsABomb(true);
            //campo[x][y].setVisivel(true);
        }
        for(int i = 0; i < 9; i++)
            for(int x = 0; x < 9; x++)
                contarBombas(i, x);

        return campo;
    }

    private void contarBombas(int i, int x) {
        int count = 0;
        for (int dx = -1; dx <= 1; dx++) {
            for (int dy = -1; dy <= 1; dy++) {
                int newX = i + dx;
                int newY = x + dy;
                if (newX >= 0 && newX < 8 && newY >= 0 && newY < 8) {
                    if(campo[newX][newY].getIsABomb())
                        count++;
                }
            }
        }
        if(campo[i][x].getIsABomb())
            campo[i][x].setValue("X ");
        else
            campo[i][x].setValue(Integer.toString(count)+" ");

    }

    public boolean informarRowCol(Celula[][] tabuleiro, int row, int col) {
        if(campo[row][col].getIsABomb()) {
            System.out.println("!!!!! BOMBA !!!!!");
                return false;
        }
        else {
            revelarEspacosBrancos(tabuleiro, row, col);
            return true;
        }
    }
    
    private void revelarEspacosBrancos(Celula[][] tabuleiro, int row, int col) {
        if(coordenadaValida(row, col))  {
            if(tabuleiro[row][col].getIsVisivel() == false) {
                tabuleiro[row][col].setVisivel(true);
                if(tabuleiro[row][col].getValue().equals("0 ")) {
                    revelarEspacosBrancos(tabuleiro, row-1, col);
                    revelarEspacosBrancos(tabuleiro, row+1, col);
                    revelarEspacosBrancos(tabuleiro, row, col-1);
                    revelarEspacosBrancos(tabuleiro, row, col+1);
                }
                if(tabuleiro[row][col].getValue().equals("0 "))
                    tabuleiro[row][col].setValue("  ");
            }
        }
    }

    private boolean coordenadaValida(int row, int col) {
        if(row < 0 || col < 0 || row > 8 || col > 8)
            return false;
        else
            return true;
    }

    public void printCampo() {
        System.out.println("  ROW 0 1 2 3 4 5 6 7 8");
        System.out.print("COL ");
        //System.out.println(" -  -  -  -  -  -  -  -  -");
        for(int i = 0; i < 9; i++) {
            if(i == 0)
                System.out.print( i + " ");
            else
                System.out.print("    " + i + "|");
            for(int x = 0; x < 9; x++) {
                System.out.print(campo[i][x].getValue());
            }
            System.out.print("\n");
            //System.out.println(" -  -  -  -  -  -  -  -  -");
        }
        //System.out.println(" _  _  _  _  _  _  _  _  _");
    }
}
