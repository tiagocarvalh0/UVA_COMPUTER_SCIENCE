package QUADRADO;

import FIGURA.FiguraGeometrica;

public class Quadrado implements FiguraGeometrica{
    private double perimetro;
    private double lado;

    public Quadrado() {}

    public Quadrado(double lado) {
        this.lado = lado;
        perimetro = lado * 4;;
    }

    public Quadrado(double lado, double perimetro) {
        this.lado = lado;
        this.perimetro = perimetro;
    }

    public double getPerimetro() {
        return perimetro;
    }

    public void setPerimetro(double perimetro) {
        this.perimetro = perimetro;
    }

    @Override   
    public double calcularArea() {
        return lado * lado;
    }

    @Override   
    public void printFigura() {
        System.out.println("Perimetro: " + perimetro);
        System.out.println("Lado: " + lado);
    }
    
}
