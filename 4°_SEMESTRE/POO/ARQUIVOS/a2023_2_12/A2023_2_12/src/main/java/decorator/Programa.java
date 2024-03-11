/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package decorator;

import dec.*;

/**
 *
 * @author placi
 */
public class Programa {
    public static void main(String[] args) {
        Carro c1 = new CarroBasico();
        System.out.println(c1.getCusto());
        System.out.println(c1.getComponentes());
        Carro c2 = new CarroEsporte();
        
        
       Carro carro = new CarroEsporte(new CarroBasico());
        System.out.println(carro.getCusto());
        System.out.println(carro.getComponentes());
       
       Carro carro1 = new CarroEsporte(new CarroLuxo(new CarroBasico()));

       System.out.println(carro1.getCusto());
       System.out.println(carro1.getComponentes());
   
    }
    
}
