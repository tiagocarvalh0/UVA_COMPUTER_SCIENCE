import CELULA.Celula;

public class Main {
    public static void main(String[] args) {
        Celula[][] celula = new Celula[3][3];
        for(int i = 0; i < 3; i++) {
            for(int x = 0; x < 3; x++) {
                celula[i][x] = new Celula();
            }
        }
        for(int i = 0; i < 3; i++) {
            for(int x = 0; x < 3; x++) {
                if((i+x) % 2 == 0)
                    celula[i][x].setValuePlayer1();
                else
                    celula[i][x].setValuePlayer2();
                System.out.print(celula[i][x].getValueString());
            }
        }
    }
}

/*\    /
 \  / 
  \/
  /\
 /  \
/    \
  /\
 /  \ 
/    \
\    /
 \  /
  \/*/ 