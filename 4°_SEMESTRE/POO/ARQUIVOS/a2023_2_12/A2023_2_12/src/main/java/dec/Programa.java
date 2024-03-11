/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package dec;

/**
 *
 * @author placi
 */
public class Programa {
    public static void main(String[] args) {
        Carro c1 = new CarroBasico();
        Carro carro = new CarroEsporte(new CarroLuxo(new CarroBasico()));
        System.out.println(carro.getCusto());
        System.out.println(carro.getComponentes());
        
    }
    
}
