package CAHORRO;
import CANINO.Canino;

public class Cachorro extends Canino {
    @Override
    public void fazerBarulho() {
        System.out.println("AUAUAUAU");
    }
    @Override
    public void comer() {
        System.out.println("Racao de Cachorro"); 
    }
}
