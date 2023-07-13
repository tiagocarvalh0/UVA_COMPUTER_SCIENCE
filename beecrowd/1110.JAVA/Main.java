import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int quantCartas = scan.nextInt();
        int[] discarted = new int[quantCartas+1];
        int[] remaning = new int[quantCartas+1];
        for(int i = 1; i < quantCartas; i++)
            remaning[i] = i;
        for(int i = 1; i < quantCartas; i++)
            System.out.printf("%d, ", remaning[i]);
    }
}