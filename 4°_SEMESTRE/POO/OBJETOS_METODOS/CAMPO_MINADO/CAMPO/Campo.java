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
        if(count > 0 && campo[i][x].getIsABomb() != true)
            campo[i][x].setValue(Integer.toString(count)+" ");
        else
            campo[i][x].setValue("  ");

        if(this.campo[i][x].getIsABomb())
            this.campo[i][x].setValue("X ");
    }

    public boolean informarRowCol(Celula[][] tabuleiro, int row, int col) {
        this.campo[row][col].setVisivel(true);
        if(this.campo[row][col].getIsABomb()) {
            System.out.println("!!!!! BOMBA !!!!!");
                return false;
        }
        else {
            revelarEspacosBrancos(tabuleiro, row, col);
                return true;
        }
    }

    private void revelarEspacosBrancos(Celula[][] tabuleiro, int row, int col) {
        int numRows = tabuleiro.length;
        int numCols = tabuleiro[0].length;

        Queue<int[]> queue = new LinkedList<>();
        queue.add(new int[]{row, col});

        while (!queue.isEmpty()) {
            int[] cell = queue.poll();
            int r = cell[0];
            int c = cell[1];

            // Verifique os 8 vizinhos
            int[] dr = {-1, -1, -1, 0, 0, 1, 1, 1};
            int[] dc = {-1, 0, 1, -1, 1, -1, 0, 1};

            for (int i = 0; i < 8; i++) {
                int newRow = r + dr[i];
                int newCol = c + dc[i];

                // Verifique se a célula está dentro dos limites do tabuleiro
                if (newRow >= 0 && newRow < numRows && newCol >= 0 && newCol < numCols) {
                    Celula currentCell = tabuleiro[newRow][newCol];
                    if (!currentCell.getIsVisivel() && currentCell.getIsABomb() == false) {
                        currentCell.virar(); // Marque como visível
                        //if (currentCell.getValue().equals(" "))
                        String cellValue = currentCell.getValue();
                        if (cellValue.equals(" ") || (cellValue.matches("[0-9]") && Integer.parseInt(cellValue) == 0)) {
                            // Se a célula for um espaço em branco, adicione à fila
                            tabuleiro[newRow][newCol].setValue("  ");
                            queue.add(new int[]{newRow, newCol});
                        }
                    }
                }
            }
        }
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
