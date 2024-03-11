/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio1;

import java.util.ArrayList;

/**
 *
 * @author placi
 */
public class Canal {
    private String nome;
    private ArrayList<Programacao> programacao = new ArrayList();

    public Canal(String nome) {
        this.nome = nome;
    }
    

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
    
    
    public void adicionarProgramacao(String nome, String inicio, String fim){
        programacao.add(new Programacao( nome, inicio, fim));
    }
    
    public void imprimirProgramacao(){
        for(Programacao p: programacao){
            System.out.println(p.getNome());
            System.out.println(p.getInicio());
            System.out.println(p.getFim());
        }
            
    }
    
}
