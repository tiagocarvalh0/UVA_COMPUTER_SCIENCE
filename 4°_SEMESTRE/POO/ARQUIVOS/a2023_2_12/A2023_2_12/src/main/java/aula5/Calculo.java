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
public class Calculo {

    private Calculo(){}
    
    public static int calcular(int x, int y, String tipo) throws ArithmeticException{
        if (tipo.equals("Soma")) //300
            return x + y;
        if (tipo == "Subtracao") //300
            return x - y;
        if (tipo == "Multiplicacao") //300
            return x * y;
        if (tipo == "Exponencial")
            return (int) Math.pow(x,y);
        if (tipo == "SomaQuadrado") //300
            return x*x + y*y;
        
        if (tipo == "Divisao") {
            if (y == 0)
                throw new ArithmeticException();
            else
               return x/y;
        }       
        else 
            return 0;
    }
    
    
    
    
}
