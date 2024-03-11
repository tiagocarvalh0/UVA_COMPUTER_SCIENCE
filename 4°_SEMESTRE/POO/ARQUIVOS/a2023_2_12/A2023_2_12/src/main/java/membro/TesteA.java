/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package membro;

/**
 *
 * @author placi
 */
public class TesteA {

    public static void main(String[] args) {
        PetShop loja = new PetShop();
// Erro: PetShop.Gato bicho;   privado
         Bicho bicho = loja.comprar("Garfield");
         
        
        
        System.out.println(bicho.getNome());
    }
}
