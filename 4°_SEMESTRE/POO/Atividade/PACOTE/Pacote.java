package PACOTE;

import CANAL.Canal;
import java.util.ArrayList;

public class Pacote {

    private String nome;
    private ArrayList<Canal> pacotes = new ArrayList<>();

    public Pacote() {}

    public Pacote(Canal canal) {
        pacotes.add(canal);
    }

    public String getNome() {
        return nome;
    }

    public ArrayList<Canal>  getPacotes() {
        return pacotes;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void adcionarCanal(Canal canal) {
        pacotes.add(canal);
    }

}
