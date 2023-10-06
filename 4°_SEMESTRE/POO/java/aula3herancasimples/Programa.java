/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula3herancasimples;

/**
 *
 * @author placi
 */
public class Programa {
    public static void main(String[] args) {
        BaralhoGenerico b = new BaralhoGenerico();
        b.getBaralho();
        System.out.println(b.getValorCarta(1));
        
        
        Baralho normal = new Baralho();
        normal.getBaralho();
        System.out.println(normal.getValorCarta(1));
        System.out.println(normal.getValorCarta(2));
        System.out.println(normal.getValorCarta(3));
        System.out.println(normal.getValorCarta(4));
        
        
        
        
    }
    
}
