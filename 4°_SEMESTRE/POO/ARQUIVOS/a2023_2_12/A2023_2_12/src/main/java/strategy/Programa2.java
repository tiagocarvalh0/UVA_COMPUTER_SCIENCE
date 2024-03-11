/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package strategy;


/**
 *
 * @author placi
 */
public class Programa2 {
    public static void main(String[] args) {
        Calculo.calcular(3, 3, new Soma());
       System.out.println(Calculo.calcular(3, 4, new Soma()));
//        System.out.println(Calculo.calcular(3, 4, new Multiplicacao()));
try {
System.out.println(Calculo.calcular(3, 0, new Divisao()));
} catch (Exception e){
    System.out.println("erro");
}

    }
    
}
