/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula3herancaabstrata;

/**
 *
 * @author placido
 */
public class Gato extends Animal {

    public Gato() {
//        super();
        System.out.println("gato sem parametro");
    }

    public Gato(String nome) {
        super(nome);
        //    this.nome = nome;");
        System.out.println("gato com parametro");
    }

    @Override
    public void som() {
        System.out.println("miau");
    }

}
