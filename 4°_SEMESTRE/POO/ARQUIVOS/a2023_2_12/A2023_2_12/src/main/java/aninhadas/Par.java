/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aninhadas;

/**
 *
 * @author placi
 */
class Par {
    private Chave chave;
    private Valor valor;

    public Par(Chave chave, Valor valor) {
        this.chave = chave;
        this.valor = valor;
    }

    public Par(String s, int i) {
        this.chave = new Chave(s);
        this.valor = new Valor(i);
    }
    
    
    static class Chave {

        private String nome;

        public String getNome() {
            return nome;
        }

        public void setNome(String nome) {
            this.nome = nome;
        }
        
        

        public Chave(String nome) {
            this.nome = nome;
        }
    }

    protected static class Valor {

        private int valor;

        public int getValor() {
            return valor;
        }

        public void setValor(int valor) {
            this.valor = valor;
        }
        
        

        public Valor(int valor) {
            this.valor = valor;
        }
    }
}
