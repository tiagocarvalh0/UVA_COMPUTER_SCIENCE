import teste.Equacao2Grau;
import java.util.Scanner;


public class Programa2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Equacao2Grau eq = new Equacao2Grau(scan.nextInt(), scan.nextInt(), scan.nextInt());
        System.out.println(eq.x1());
        System.out.println(eq.x2());
        
    }
}
