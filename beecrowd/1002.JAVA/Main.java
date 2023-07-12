import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);
        double raio = scanf.nextDouble();
        double pi = 3.14159;
        double resul = (raio*raio)*pi;
        System.out.printf("A=%.04f\n", resul); 
    }
}