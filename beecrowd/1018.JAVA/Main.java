import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[] notas = {100, 50, 20, 10, 5, 2, 1};
        int value = scan.nextInt();
        int aux;
        System.out.printf("%d\n", value);
        for(int i = 0; i < 7; i++) {
            aux = quantNotas(value, notas[i]);
            System.out.printf("%d nota(s) de R$ %d,00\n", aux, notas[i]);
            value = value - (aux * notas[i]);
        }
    }
    public static int quantNotas(int value, int nota) {
        return value / nota;
    }
}