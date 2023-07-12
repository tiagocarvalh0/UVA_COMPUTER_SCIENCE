import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);
        int aux = scanf.nextInt();
        for(int i = 0; i < 2; i++) {
            int x = scanf.nextInt();
            if(x > aux)
                aux = x;
        }
        System.out.printf("%d eh o maior\n", aux);
    }
}