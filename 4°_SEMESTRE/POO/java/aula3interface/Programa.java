/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula3interface;

/**
 *
 * @author placi
 */
public class Programa {
    public static void main(String[] args) {
//        Figura f = new Figura();
        Circulo c = new Circulo();
        c.setRaio(3);
        Circulo c2 = new Circulo(4);
        System.out.println(c.area());
        System.out.println(c2.area());
        System.out.println(c.I);
        System.out.println(c2.I);
        Figura d = new Circulo(2);
        System.out.println(d.area());
        ((Circulo) d).setRaio(3);
        Circulo e = (Circulo) d;
        System.out.println(e.area());
        
        
    }
    
    
}
