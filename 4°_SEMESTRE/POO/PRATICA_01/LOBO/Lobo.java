package LOBO;
import CANINO.Canino;

public abstract class Lobo extends Canino{
    @Override 
    public void fazerBarulho(){
        System.out.println("WOFL WOLF");
    }
    @Override
    public void comer() {
        System.out.println("Carne Vermelha");
    }
}
