/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula1;

/**
 *
 * @author placi
 */
public class Programa {
    public static void main(String[] args) {
        Carta c;
        c= new Carta();
        c.setNaipe("ouro");
        c.setValor("10");
        Carta d = new Carta();
        d.setNaipe("paus");
        d.setValor("A");
        System.out.println(c.getNaipe());
        System.out.println(c.getValor());
                
        
    }
    
}
