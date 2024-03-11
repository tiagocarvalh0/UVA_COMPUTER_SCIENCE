/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package singleton;


/**
 *
 * @author placi
 */
public class Programa2 {

    public static void main(String[] args) {
        EspacoAereo e = EspacoAereo.criaEspacoAereo();
        e.adicionarAviao(new Aviao("Boeing","737"));
        e.adicionarAviao(new Aviao("Airbus","A380"));
        e.adicionarAviao(new Aviao("Boeing","777"));
        e.adicionarAviao(new Aviao("Boeing","787"));
        e.adicionarAviao(new Aviao("Airbus","A330"));
       
        
        e.imprimir();

        EspacoAereo d = EspacoAereo.criaEspacoAereo();
        d.imprimir();
        
        e.decolar(2);
        e.situacao();
        
        
        
        d.situacao();

    }

}
