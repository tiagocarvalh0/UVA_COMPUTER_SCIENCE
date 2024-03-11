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
public class Circulo implements Figura {
    private int raio;

    public int getRaio() {
        return raio;
    }

    public void setRaio(int raio) {
        this.raio = raio;
    }

    public Circulo() {
    }

    public Circulo(int raio) {
        this.raio = raio;
    }
    

    @Override
    public double area() {
       return Math.PI*raio*raio;
    }

    @Override
    public double perimetro() {
        return 2*Math.PI*raio;
    }
    
}
