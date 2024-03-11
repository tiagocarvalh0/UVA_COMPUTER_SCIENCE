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
class TimeFutebol {

    private Tecnico tecnico;
    private Jogador[] time = new Jogador[11];

    class Pessoa {

        String nome;

        Pessoa(String nome) {
            this.nome = nome;
        }
    }

    private class Tecnico extends Pessoa {

        Tecnico(String nome) {
            super(nome);
        }
    }

    public class Jogador extends Pessoa {

        public Jogador(String nome) {
            super(nome);
        }
    }

    public void setTecnico(String nome) {
        this.tecnico = new Tecnico(nome);
    }

    public void addJogador(int c, Jogador j) {
        time[c] = j;
    }
    
    public void addJogador(int c, String j) {
//        Jogador jog = new Jogador(j);
        time[c] = new Jogador(j);  //jog
    }

    
    
}
