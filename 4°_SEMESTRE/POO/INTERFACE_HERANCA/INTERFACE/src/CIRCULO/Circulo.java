package CIRCULO;

import FIGURA.FiguraGeometrica;

public class Circulo implements FiguraGeometrica {
    private double perimetro;
    private double raio;
    private double area;

    public Circulo() {}

    public Circulo(double perimetro) {
        this.perimetro = perimetro;
        raio = perimetro / (2 * Math.PI);
        area = (raio * raio) * Math.PI;
    }
    
    public Circulo(double perimetro, double raio) {
        this.perimetro = perimetro;
        this.raio = raio;
        area = (raio * raio) * Math.PI;
    }

    public Circulo(double perimetro, double raio, double area) {
        this.perimetro = perimetro;
        this.raio = raio;
        this.area = area;
    }

    public double getPerimetro() {
        return perimetro;
    }

    public double getRaio() {
        return raio;
    }

    public double getArea() {
        return area;
    }

    public void setPerimetro(double perimetro) {
        this.perimetro = perimetro;
    }

    public void setRaio(double raio) {
        this.raio = raio;
    }

    public void setArea(double area) {
        this.area = area;
    }

    
    @Override
    public double calcularArea() {
        area = (raio * raio) * Math.PI;
        return area;
    }
    
    @Override
    public void printFigura() {
        System.out.println("Perimetro = " + perimetro);
        System.out.println("Raio = " + raio);
        System.out.println("Area = " + area);
    }
}