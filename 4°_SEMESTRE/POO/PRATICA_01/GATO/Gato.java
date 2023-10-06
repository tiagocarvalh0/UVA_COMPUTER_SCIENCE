package GATO;
import FELINO.Felino;

public abstract class Gato extends Felino{
    @Override
    public void fazerBarulho() {
        System.out.println("MIAU MIAU");
    }
    @Override
    public void comer() {
        System.out.println("Racao de Gato");
    }
}
