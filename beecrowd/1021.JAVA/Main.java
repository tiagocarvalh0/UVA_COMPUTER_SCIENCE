import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[] notas =      {100, 50, 20, 10, 5, 2, 1,  50, 25, 10, 5, 1};
        int[] notasPrint = {100, 50, 20, 10, 5, 2, 1,   50, 25, 10, 5, 1};
        double value = scan.nextDouble();
        System.out.printf("NOTAS:\n");
        for(int i = 0; i < 12; i++) {
            int aux = quantNotas(value, notas[i]);
            if(i < 5)
                System.out.printf("%d nota(s) de R$ %d.00\n", aux, notasPrint[i]);
            else {
                if(i == 6)
                    System.out.printf("MOEDAS:\n");
                if(i < 7)
                    System.out.printf("%d nota(s) de R$ %d.00\n", aux, notasPrint[i]);
                if(i >= 7) {
                    if(i == 10 || i == 11)
                        System.out.printf("%d nota(s) de R$ 0.0%d\n", aux, notasPrint[i]);
                    else
                        System.out.printf("%d nota(s) de R$ 0.%d\n", aux, notasPrint[i]);
                }
            }
            value = value - (aux*notas[i]);
        }
    }
    public static int quantNotas(double value, int nota) {
        if(value < 1 && value >= 0)
            value *= 100;
        return (int)(value / nota) ;
    }
}