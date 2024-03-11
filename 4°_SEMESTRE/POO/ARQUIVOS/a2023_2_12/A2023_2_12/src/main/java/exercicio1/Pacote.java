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
public class Pacote {
    private String nome;
    private ArrayList<Canal> canais = new ArrayList();

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public void adicionarCanal(Canal c){
        canais.add(c);
    }
    public void imprimirResumido(){
        System.out.println(nome);
        for(Canal c: canais){
            System.out.println(c.getNome());
        }
    }
    
    public void imprimirCompleto(){
        System.out.println(nome);
        for(Canal c: canais){
            System.out.println(c.getNome());
            c.imprimirProgramacao();
        }
        
    }
            
    
}
