/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula5;

/**
 *
 * @author placido
 */
public class Cidade {
    private String nome;
    private int populacao;
    private double territorio;
    private Estado uf;

    public Cidade() {
    }

    public Cidade(String nome, int populacao, double territorio, Estado uf) {
        this.nome = nome;
        this.populacao = populacao;
        this.territorio = territorio;
        this.uf = uf;
    }

    public Cidade(String nome, int populacao, double territorio) {
        this.nome = nome;
        this.populacao = populacao;
        this.territorio = territorio;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getPopulacao() {
        return populacao;
    }

    public void setPopulacao(int populacao) {
        this.populacao = populacao;
    }

    public double getTerritorio() {
        return territorio;
    }

    public void setTerritorio(double territorio) {
        this.territorio = territorio;
    }

    public Estado getUf() {
        return uf;
    }

    public void setUf(Estado uf) {
        this.uf = uf;
    }
    
    public String getEstadoNome(){
        if (uf == null)
            return "";
        else  
            return uf.getNome();
        
    }
    
    public int getEstadoPopulacao(){
        return uf.getPopulacao();
    }
  
    public double getEstadoTerritorio(){
        return uf.getTerritorio();
    }

    
}
