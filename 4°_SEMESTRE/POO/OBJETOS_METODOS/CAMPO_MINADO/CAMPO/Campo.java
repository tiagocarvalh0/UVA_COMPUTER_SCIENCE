package CAMPO;

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

    public void contarBombas(int i, int x) {
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
        if(count > 0 && campo[i][x].getIsABomb() != true)
            campo[i][x].setValue(Integer.toString(count)+" ");
        else
            campo[i][x].setValue(" ");

        if(this.campo[i][x].getIsABomb())
            this.campo[i][x].setValue("X ");
    }


    public void printCampo() {
        for(int i = 0; i < 9; i++) {
            for(int x = 0; x < 9; x++) {
                System.out.print(campo[i][x].getValue());
            }
            System.out.printf("\n");
        }
    }
}
