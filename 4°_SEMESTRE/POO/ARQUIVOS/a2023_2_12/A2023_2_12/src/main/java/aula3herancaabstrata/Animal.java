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
public abstract class Animal {
    public final int L = 2;     //constante
    
    protected String nome;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Animal() {
        System.out.println("animal sem parametro");
    }

    public Animal(String nome) {
        System.out.println("Animal com parametro");
        this.nome = nome;
    }
    
    public abstract void som();
    
    
}
