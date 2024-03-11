/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio1;

/**
 *
 * @author placi
 */
public class Funcionario implements Gratificacao{
    @Override
    public double calculo(double salario){
        return salario * 0.1;
    }
    
}
