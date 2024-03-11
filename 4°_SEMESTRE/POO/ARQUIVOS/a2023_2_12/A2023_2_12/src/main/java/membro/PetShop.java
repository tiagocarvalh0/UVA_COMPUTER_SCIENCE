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
class PetShop {

    private class Gato implements Bicho {

        String nome;

        public Gato(String nome) {
            this.nome = nome;
        }

        public String getNome() {
            return nome;
        }
    }

    public Bicho comprar(String nome) {
        return new Gato(nome);
    }
}

