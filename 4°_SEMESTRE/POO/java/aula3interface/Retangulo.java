/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula3interface;

/**
 *
 * @author placido
 */
public class Retangulo implements Figura {
    private int base,altura;

    public int getBase() {
        return base;
    }

    public void setBase(int base) {
        this.base = base;
    }

    public int getAltura() {
        return altura;
    }

    public void setAltura(int altura) {
        this.altura = altura;
    }

    public Retangulo() {
    }

    public Retangulo(int base, int altura) {
        this.base = base;
        this.altura = altura;
    }


    
    @Override
    public double area() {
       return base*altura;

    }

    @Override
    public double perimetro() {
        return 2*base*altura;
    }
        
}
