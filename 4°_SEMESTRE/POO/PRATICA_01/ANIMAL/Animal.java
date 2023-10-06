package ANIMAL;

public abstract class Animal {
    private double tamanho;
    private double peso;
    private int idade;
    
    public double getTamanho() {
        return tamanho;
    }

    public double getPeso() {
        return peso;
    }

    public int getIdade() {
        return idade;
    }

    public void setTamanho(double tamanho) {
        this.tamanho = tamanho;
    }

    public void setPeso(double peso) {
        this.peso = peso;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public void fazerBarulho(){}
    public void comer(){}
    public void vaguear(){}

    public void dormir(){
        System.out.println("zzzzzzzzz");
    }
}
