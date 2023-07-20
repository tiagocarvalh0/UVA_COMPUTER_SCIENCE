import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double raio = scan.nextInt();
        double resultado = (4/3.0) * 3.14159 * raioElevado(raio, 3);
        System.out.printf("VOLUME = %.03f\n", resultado);
    }
    public static double raioElevado(double value, int vezes) {
        double aux = value;
        for(int i = 0; i < vezes-1; i++) {
            value = value * aux;
        }
        return value;
    }
}