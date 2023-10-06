/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula51;

/**
 *
 * @author placi
 */
public class Programa2 {
    public static void main(String[] args) {
        System.out.println(Calculo.calcular(3, 4, new Soma()));
        System.out.println(Calculo.calcular(3, 4, new Multiplicacao()));
        
    }
    
}
