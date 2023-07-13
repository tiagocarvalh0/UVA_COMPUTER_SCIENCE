import java.io.IOException;
import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int tamVetor = scan.nextInt();
        int numVetor;
        int cout1 = 0;
        int cout2 = 0;
        int[] vetorCrescente = new int[tamVetor];
        Integer[] vetorDecrecente = new Integer[tamVetor];
        for(int i = 0; i < tamVetor; i++) {
            numVetor = scan.nextInt();
            if(numVetor % 2 == 0)
                vetorCrescente[cout1++] = numVetor;
            else
                vetorDecrecente[cout2++] = numVetor;
        }
        for(int i = 0; i < cout1; i++)
            System.out.printf("%d, ", vetorCrescente[cout1]); 
        for(int i = 0; i < cout2; i++)
            System.out.printf("%d, ", vetorDecrecente[cout2]); 
            

    }
}