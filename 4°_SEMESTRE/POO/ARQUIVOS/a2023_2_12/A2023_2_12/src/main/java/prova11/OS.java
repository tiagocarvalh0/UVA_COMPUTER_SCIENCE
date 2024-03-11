/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package prova11;

import java.util.ArrayList;

/**
 *
 * @author placi
 */
public class OS {
    private String numero;
    private ArrayList<Detalhe> detalhes = new ArrayList();

    public String getNumero() {
        return numero;
    }

    public void setNumero(String numero) {
        this.numero = numero;
    }

    public OS() {
    }

    public OS(String numero) {
        this.numero = numero;
    }
    
    public ArrayList<Detalhe> getDetalhes(){
        return detalhes;
    }
    
    public void adicionarDetalhe(Item item, double quantidade, double valor){
        detalhes.add(Detalhe.criarDetalhe(item, quantidade, valor));
    }
        
    public void removerDetalhe(Item item){
        Detalhe detalhe=null;
        for(Detalhe d: detalhes){
            if (d.getItem().equals(item)){
               detalhe=d;
            }
        }
        if (detalhe != null)
            detalhes.remove(detalhe);
    }

      
    public void imprimir(Imprimivel imp){
        imp.imprimir(this);
    }   
       
 
}
