import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);

        int x = scanf.nextInt();
        int quant1 = scanf.nextInt();
        double val1 = scanf.nextDouble();
        int w = scanf.nextInt();
        int quant2 = scanf.nextInt();
        double val2 = scanf.nextDouble();
        double res = (quant1 * val1) + (quant2 * val2);
        System.out.printf("VALOR A PAGAR: R$ %.02f\n", res);
    }
}