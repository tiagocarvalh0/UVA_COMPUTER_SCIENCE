package PROGRAMACAO;

public class Programacao {
    
    private String nome;
    private String inicio;
    private String fim;

    public Programacao() {}

    public Programacao(String nome, String inicio, String fim) {
        this.nome = nome;
        this.inicio = inicio;
        this.fim = fim;
    }

    public String getNome() {
        return nome;
    }

    public String getInicio() {
        return inicio;
    }

    public String getFim() {
        return fim;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setInicio(String inicio) {
        this.inicio = inicio;
    }

    public void setFim(String fim) {
        this.fim = fim;
    }

}
