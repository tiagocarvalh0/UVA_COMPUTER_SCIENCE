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
public class Cao extends Animal {

    public Cao() {
//        super();
        System.out.println("cao sem parametro");
    }

    public Cao(String nome) {
        super(nome);
//        this.nome = nome;
        System.out.println("cao com parametro");
    }
    
    

    @Override
    public void som() {
        System.out.println("au au");
    }
    
    
    
    
}
