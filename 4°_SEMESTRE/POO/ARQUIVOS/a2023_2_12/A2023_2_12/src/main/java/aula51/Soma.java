/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula51;

/**
 *
 * @author placi
 */
public class Soma implements Calculavel{

    @Override
    public int calcular(int x, int y) throws ArithmeticException{
        return x+y;
    }
    
}
