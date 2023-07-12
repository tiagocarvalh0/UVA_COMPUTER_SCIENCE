import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String nome = scan.nextLine();
        double valor1 = scan.nextDouble();
        double valor2 = scan.nextDouble();
        System.out.printf("TOTAL = R$ %.02f\n", CalculoSalario(valor1, valor2));
    }

    public static double CalculoSalario(double fixo, double vendas) {
        return fixo + (vendas*0.15); 
    }
}