/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula4;

import java.util.ArrayList;

/**
 *
 * @author placi
 */
public class EspacoAereo {
    // Singleton
    
    private static EspacoAereo instancia = null; //
    ArrayList<Aviao> avioes = new ArrayList();
    
    private EspacoAereo(){}  //
    
    
    public static EspacoAereo criaEspacoAereo(){  //Factory Method
        if (instancia == null){
            instancia = new EspacoAereo();
        }
        return instancia;
    }

    public void adicionarAviao(Aviao a){
        avioes.add(a);
    }    

    public void imprimir(){
        for(Aviao a: avioes){
            System.out.println(a.getMarca()+"    "+a.getModelo());
        }
    }

    public void decolar(int i){
        if (i<0 || i>avioes.size())
            System.out.println("Aviao nao existe");
        else
            avioes.get(i-1).decolar();
    }
    
    public void pousar(int i){
        if (i<0 || i>avioes.size())
            System.out.println("Aviao nao existe");
        else
            avioes.get(i-1).pousar();
    }
    
    
    public void situacao(){
        
        for(Aviao a: avioes){
            System.out.println(avioes.indexOf(a)+1);
            System.out.println(a.getMarca()+"    "+a.getModelo());
            System.out.println(a.estado());
        }
    }
    
}
