import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);
        int M = scanf.nextInt();
        int N = scanf.nextInt();
        int soma = 0;
        int maior = M;
        int menor = M;
        while(M > 0 && N > 0) {
            if(maior < M)
                maior = M;
            if(maior < N)
                maior = N;
            if(menor > M)
                menor = M;
            if(menor > N)
                menor = N;
            for(int i = menor; i <= maior; i++) {
                soma += i;
                System.out.printf("%d ", i);
            }

            System.out.printf("Sum=%d\n", soma);
            M = scanf.nextInt();
            N = scanf.nextInt();
            maior = M;
            menor = M;
            soma = 0;
        }
    }
}