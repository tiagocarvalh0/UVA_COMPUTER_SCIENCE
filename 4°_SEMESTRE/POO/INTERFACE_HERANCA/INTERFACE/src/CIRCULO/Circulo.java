package CIRCULO;

import FIGURA.FiguraGeometrica;

public class Circulo implements FiguraGeometrica {
    private double perimetro;
    private double raio;

    public Circulo() {}

    public Circulo(double perimetro) {
        this.perimetro = perimetro;
        raio = perimetro / (2 * Math.PI);
    }
    
    public Circulo(double perimetro, double raio) {
        this.perimetro = perimetro;
        this.raio = raio;
    }

    public Circulo(double perimetro, double raio, double area) {
        this.perimetro = perimetro;
        this.raio = raio;
    }

    public double getPerimetro() {
        return perimetro;
    }

    public double getRaio() {
        return raio;
    }

    public void setPerimetro(double perimetro) {
        this.perimetro = perimetro;
    }

    public void setRaio(double raio) {
        this.raio = raio;
    }

    
    @Override
    public double calcularArea() {
        return (raio * raio) * Math.PI;
    }
    
    @Override
    public void printFigura() {
        System.out.println("Perimetro = " + perimetro);
        System.out.println("Raio = " + raio);
    }
}