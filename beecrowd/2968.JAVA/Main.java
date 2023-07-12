import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);
        int V = scanf.nextInt();
        int N = scanf.nextInt();
        int num;
        double x;
        int val = V * N; 
        for(int i = 1; i <= 9; i++) {
            x = val * ((double)i/10);
            num = (int)x;
            if(x - (int)x > 0)
                ++num;
            if(i != 9)
                System.out.printf("%d ", num);
            else
                System.out.printf("%d\n", num);
        }
    }
}