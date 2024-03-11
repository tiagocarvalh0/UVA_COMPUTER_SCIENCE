/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula5;

/**
 *
 * @author placi
 */
public class Programa2 {
    public static void main(String[] args) {
        System.out.println(Math.sqrt(4));
//        Calculo c = new Calculo();
        System.out.println(Calculo.calcular(3, 4, "Soma"));
        System.out.println(Calculo.calcular(4, 3, "Exponencial"));        
        System.out.println(Calculo.calcular(4, 3, "Subtracao"));        
   
    }
    
}
