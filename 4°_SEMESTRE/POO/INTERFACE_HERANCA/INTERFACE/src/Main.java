
import CALCULAR.CalcularArea;
import CIRCULO.Circulo;
import QUADRADO.Quadrado;

public class Main {
    public static void main(String[] args) {
        Circulo circulo = new Circulo(10);
        System.out.println(circulo.calcularArea());

        Quadrado quadrado = new Quadrado(10);
        System.out.println(quadrado.calcularArea());

        CalcularArea calcular = new CalcularArea();
        System.out.println(calcular.SomaArea(quadrado, circulo));
    }
}