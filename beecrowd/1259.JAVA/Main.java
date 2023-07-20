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
        Integer[] vetorCrescente = new Integer[tamVetor];
        Integer[] vetorDecrecente = new Integer[tamVetor];
        Arrays.fill(vetorCrescente, null);
        Arrays.fill(vetorDecrecente, null);
        for(int i = 0; i < tamVetor; i++) {
            numVetor = scan.nextInt();
            if(numVetor % 2 == 0)
                vetorCrescente[cout1++] = numVetor;
            else if(numVetor % 2 != 0)
                vetorDecrecente[cout2++] = numVetor;
        }
        Arrays.sort(vetorCrescente, Comparator.nullsLast(Comparator.naturalOrder()));
        Arrays.sort(vetorDecrecente, Comparator.nullsLast(Comparator.reverseOrder()));
        for(int i = 0; i < cout1; i++)
            System.out.printf("%d\n", vetorCrescente[i]); 
        for(int i = 0; i < cout2; i++) 
            System.out.printf("%d\n", vetorDecrecente[i]); 
    }
}