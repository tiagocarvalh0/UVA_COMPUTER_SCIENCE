/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package prova1;

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
    
    public void adicionarDetalhe(Peca peca, double quantidade, double valor){
        detalhes.add(new Detalhe(peca, quantidade, valor));
    }
    public void adicionarDetalhe(Servico servico, double quantidade, double valor){
        detalhes.add(new Detalhe(servico, quantidade, valor));
    }
    
    
    public void removerDetalhe(Peca peca){
        Detalhe detalhe=null;
        for(Detalhe d: detalhes){
            if (d.getPeca().equals(peca)){
               detalhe=d;
            }
        }
        if (detalhe != null)
            detalhes.remove(detalhe);
    }

       public void removerDetalhe(Servico servico){
        Detalhe detalhe=null;
        for(Detalhe d: detalhes){
            if (d.getServico().equals(servico)){
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
