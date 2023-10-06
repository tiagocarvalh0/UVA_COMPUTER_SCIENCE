/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula3interface;

/**
 *
 * @author placi
 */
public class Quadrado  implements Figura{
    private int lado;

    public int getLado() {
        return lado;
    }

    public void setLado(int lado) {
        this.lado = lado;
    }

    public Quadrado() {
    }

    public Quadrado(int lado) {
        this.lado = lado;
    } 
    

    @Override
    public double area() {
        return lado*lado;
        
    }

    @Override
    public double perimetro() {
        return 4*lado;
    }
    
}
