/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula51;

import java.util.ArrayList;

/**
 *
 * @author placido
 */
public class Estado {
    private String nome;
    private int populacao;
    private double territorio;
    private ArrayList<Cidade> cidades = new ArrayList();
    
    
    public void adicionarCidade(Cidade c){ //agregação
        cidades.add(c);
    }
    
    public void adicionarCidade(String nome, int populacao, double territorio){ //composição
        cidades.add(new Cidade(nome, populacao, territorio));
    }
    

    public Estado() {
    }

    
    
    
    public Estado(String nome, int populacao, double territorio) {
        this.nome = nome;
        this.populacao = populacao;
        this.territorio = territorio;
    }

    
    public void imprimir(){
        for(Cidade c: cidades){
            System.out.println(c.getNome());
        }
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

    public void setPopulacao(int populuacao) {
        this.populacao = populuacao;
    }

    public double getTerritorio() {
        return territorio;
    }

    public void setTerritorio(double territorio) {
        this.territorio = territorio;
    }
    
    
}
