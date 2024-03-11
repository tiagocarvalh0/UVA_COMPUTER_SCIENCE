/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula3herancaabstrata;

/**
 *
 * @author placi
 */
public class Muricoca extends Animal {
    
    public Muricoca(){}
    public Muricoca(String nome) {super(nome);}

    @Override
    public void som() {
        System.out.println("zzzzzzzzzzzzz");
    }
    
}
