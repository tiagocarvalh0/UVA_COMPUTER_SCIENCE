package LEAO;
import FELINO.Felino;

public class Leao extends Felino {
    @Override
    public void fazerBarulho() {
        System.out.println("WARRRRR");
    }
    @Override
    public void comer() {
        System.out.println("Carne Vermelha");
    }
}
