/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package strategy;


/**
 *
 * @author placi
 */
public class Divisao  implements Calculavel{

    @Override
    public int calcular(int x, int y) throws ArithmeticException{
            if (y == 0)
                throw new ArithmeticException();
            else
               return x/y;

    }
    
}
