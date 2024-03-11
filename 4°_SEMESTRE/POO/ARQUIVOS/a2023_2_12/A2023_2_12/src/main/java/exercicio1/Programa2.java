/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio1;

/**
 *
 * @author placi
 */
public class Programa2 {
    public static void main(String[] args) {
        Folha f = new Folha();
        System.out.println(f.calcularGratificacao(20000, new Funcionario()));
        System.out.println(f.calcularGratificacao(20000, new Gerente()));
        System.out.println(f.calcularGratificacao(20000, new Executivo()));
        
        
    }
    
}
