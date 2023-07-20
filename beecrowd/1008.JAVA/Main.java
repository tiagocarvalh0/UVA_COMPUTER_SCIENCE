import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int time = scan.nextInt();
        double salary = scan.nextDouble();
        System.out.printf("NUMBER = %d\n", number);
        System.out.printf("SALARY = U$ %.02f\n", time * salary);
    }
}