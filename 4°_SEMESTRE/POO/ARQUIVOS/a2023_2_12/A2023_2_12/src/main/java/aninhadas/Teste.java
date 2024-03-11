/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aninhadas;

/**
 *
 * @author placi
 */
public class Teste {

    public static void main(String[] args) {

        Par.Chave chave = new Par.Chave("Nota");
        
        Par.Valor valor = new Par.Valor(10);
        
        
        Par par = new Par(chave, valor); // Agregação
        chave.setNome("Nota2");
        
        Par par2 = new Par(new Par.Chave("xxxx"),new Par.Valor(2));
        
        
        Par par1 = new Par("Nota",9);   //composição
        

//        chave = new Par.Chave("X");
//        valor = new Par.Valor(2);
//        Par par2 = new Par(chave, valor);

        Par par3 = new Par("X",2);
        
    }
}
