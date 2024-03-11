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
public class Teste {

    public static void main(String[] args) {
        TimeFutebol selecao = new TimeFutebol();
        selecao.setTecnico("Felipão");


        TimeFutebol.Jogador jogador; 
        
        
        /* se Jogador fosse statuic
        TimeFutebol.Jogador jogador = new TimeFutebol.Jogador("Júlio César")
        */
        
     //   jogador = new Timefutebol.Jogador("ajdhdjh");
        
        jogador = selecao.new Jogador("Júlio César");


        selecao.addJogador(12, jogador);
        
        selecao.addJogador(12,"Julio Cesar");

        jogador = selecao.new Jogador("Fred");
        selecao.addJogador(9, jogador);
       
        selecao.addJogador(9, "Fred");
// ...
    }
}
