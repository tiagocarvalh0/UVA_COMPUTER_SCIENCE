
import CAMPO.Campo;
import CELULA.Celula;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Campo campo = new Campo();
        Celula[][] tabuleiro = campo.getCampo();
        campo.printCampo();
        while(true) {
            if(campo.informarRowCol(tabuleiro, scan.nextInt(), scan.nextInt()))
                campo.printCampo();
            else
                break;
        }
    }
}