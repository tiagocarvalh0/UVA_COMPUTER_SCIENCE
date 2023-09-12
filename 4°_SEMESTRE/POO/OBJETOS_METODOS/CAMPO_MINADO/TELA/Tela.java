package TELA;

import java.util.Scanner;
import CAMPO.Campo;
import CELULA.Celula;

public class Tela {       

    private Scanner scan = new Scanner(System.in);
    private Campo campo = new Campo();
    private Celula[][] tabuleiro = campo.getCampo();

    public Tela() {}
    
    public void Iniciar() {
        campo.printCampo();
        while(true) {
            if(campo.informarRowCol(tabuleiro, scan.nextInt(), scan.nextInt()))
                campo.printCampo();
            else
                break;
        }
    }
}