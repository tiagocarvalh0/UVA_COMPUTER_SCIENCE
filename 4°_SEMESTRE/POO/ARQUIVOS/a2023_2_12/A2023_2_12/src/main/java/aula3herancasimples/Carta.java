/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula3herancasimples;

/**
 *
 * @author placi
 */
public class Carta {
        private String valor,naipe;
    private boolean visivel = false;


    public void setValor(String valor) {
        this.valor = valor;
    }


    public void setNaipe(String naipe) {
        this.naipe = naipe;
    }

    // Construtor
    public Carta(String v, String n){
        valor = v;
        naipe = n;
    }
    
    public Carta(){
        
    }


    public String getValor() {
        if (visivel)
           return valor;
        else 
           return "Nan"; 
    }


    public String getNaipe() {
        if (visivel) 
           return naipe;
        else
           return "Nan";
    }

    
    public void virar(){
        visivel= !visivel;
    }


   
    

    
}
