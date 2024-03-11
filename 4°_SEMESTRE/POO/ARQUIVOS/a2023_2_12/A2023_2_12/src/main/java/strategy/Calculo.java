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
public class Calculo {
    private Calculo(){};
    public static int calcular(int x, int y, Calculavel c){
            // late binding
            return c.calcular(x, y); //  várias formas - chamada polimórfica // late binding
    }
    
    
}
