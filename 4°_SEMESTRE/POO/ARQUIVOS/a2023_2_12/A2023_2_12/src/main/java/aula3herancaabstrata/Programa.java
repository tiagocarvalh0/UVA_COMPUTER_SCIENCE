/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula3herancaabstrata;


/**
 *
 * @author placi
 */
public class Programa {
    public static void main(String[] args) {
//        BaralhoGenerico b = new BaralhoGenerico();
//        b.getBaralho();
//        System.out.println(b.getValorCarta(1));
        
        
        Baralho normal = new Baralho();
        normal.getBaralho();
        System.out.println(normal.getValorCarta(1));
        System.out.println(normal.getValorCarta(2));
        System.out.println(normal.getValorCarta(3));
        System.out.println(normal.getValorCarta(4));
        
        
        //upacasting
        BaralhoGenerico b = new Baralho();
        b.getBaralho();
        b.virar(1);
        b.imprimirCarta(1);
        BaralhoGenerico c = new BaralhoDuplo();
        c.getBaralho();
        c.virar(70);
        c.imprimirCarta(70);
        BaralhoDuplo d = (BaralhoDuplo) c;
        d.imprimirCarta(70);
        
        
        
        
        
    }
    
}
