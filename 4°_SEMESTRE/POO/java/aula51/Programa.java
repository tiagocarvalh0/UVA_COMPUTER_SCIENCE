/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula51;

/**
 *
 * @author placi
 */
public class Programa {
     public static void main(String[] args) {
        Estado e  = new Estado();
        e.setNome("Ceara");
        Cidade c1 = new Cidade();
        c1.setNome("Sobral");
        e.adicionarCidade(c1);
        e.adicionarCidade("Fortaleza", 2400000, 30000);
        e.imprimir();
        e=null;
    }
    
}
