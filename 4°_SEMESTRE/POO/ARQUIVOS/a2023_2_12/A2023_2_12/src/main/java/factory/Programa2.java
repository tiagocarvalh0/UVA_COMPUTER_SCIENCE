/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package factory;

/**
 *
 * @author placi
 */
public class Programa2 {

    public static void main(String[] args) {
        FabricaPersonagem fabricaGuerreiro = new FabricaGuerreiro();
        FabricaPersonagem fabricaMago = new FabricaMago();
        
        
        Personagem a = fabricaMago.criarPersonagem();
        
        System.out.println("Jogando com um Guerreiro:");
        fabricaGuerreiro.jogar();

        System.out.println("\nJogando com um Mago:");
        fabricaMago.jogar();
    }

}
