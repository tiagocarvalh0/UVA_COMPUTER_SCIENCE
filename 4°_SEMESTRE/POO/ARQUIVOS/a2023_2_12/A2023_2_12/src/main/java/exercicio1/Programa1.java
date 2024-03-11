/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio1;

/**
 *
 * @author placi
 */
public class Programa1 {
    public static void main(String[] args) {
        Canal globo = new Canal("Globo");
        globo.adicionarProgramacao("JN", "20:30", "21:30");
        globo.adicionarProgramacao("Novela 1", "21:30", "22:30");
        Pacote basico = new Pacote();
        basico.setNome("Basico");
        Pacote inter = new Pacote();
        inter.setNome("Intermediario");
        Pacote completo = new Pacote();
        completo.setNome("Completo");
        basico.adicionarCanal(globo);
        Cliente c1 = new Cliente(1,"111111","jose");
        c1.setPacote(basico);
        c1.imprimirPacoteResumido();
        c1.imprimirPacoteCompleto();
        
        
    }
}
