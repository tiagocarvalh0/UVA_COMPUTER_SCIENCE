import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);
        float position1 = scanf.nextFloat();
        float position2 = scanf.nextFloat();
        if(position1 == 0 && position2 == 0) 
            System.out.printf("Origem\n");
        else if(position1 == 0)
            System.out.printf("Eixo Y\n");
        else if(position2 == 0)
            System.out.printf("Eixo X\n");
        else {
            if(position1 > 0 && position2 > 0) 
                System.out.printf("Q1\n");
            else if(position1 < 0 && position2 > 0) 
                System.out.printf("Q2\n");
            else if(position1 < 0 && position2 < 0) 
                System.out.printf("Q3\n");
            else //(position1 > 0 && position2 < 0) 
                System.out.printf("Q4\n");

        }
    }
}