import java.io.IOException;
import java.util.Scanner;
import java.lang.Double;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double A = scan.nextDouble();
        double B = scan.nextDouble();
        double C = scan.nextDouble();
        double R1 = ((-B) + Math.sqrt((B*B) - (4*A*C))) / (2*A);
        double R2 = ((-B) - Math.sqrt((B*B) - (4*A*C))) / (2*A);
        if(Double.isNaN(R1) || Double.isNaN(R2))
            System.out.printf("Impossivel calcular\n");
        else {
            System.out.printf("R1 = %.05f\n", R1);
            System.out.printf("R2 = %.05f\n", R2);
        }
    }
}