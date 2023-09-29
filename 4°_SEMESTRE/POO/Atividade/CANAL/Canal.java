package CANAL;

import PROGRAMACAO.Programacao;
import java.util.ArrayList;

public class Canal {

    private String nome;
    private ArrayList<Programacao> canais = new ArrayList<>();

    public Canal() {}

    public Canal(Programacao programa) {
        canais.add(programa);
    }

    public String getNome() {
        return nome;
    }

    public ArrayList<Programacao> getCanais() {
        return canais;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void adcionarProgramacao(Programacao programa) {
        canais.add(programa);
    }

    public void print() {
        for(Programacao x : canais) {
            System.out.println(x.getNome());
            System.out.println(x.getInicio());
            System.out.println(x.getFim());
        }
    }

}
