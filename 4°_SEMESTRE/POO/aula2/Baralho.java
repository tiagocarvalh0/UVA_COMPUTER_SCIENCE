/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula2;

import java.util.Random;

/**
 *
 * @author placi
 */
public class Baralho {
    
    private Carta carta[] = new Carta[52];
    /*
    Carta carta[0];
    Carta carta[1];
    
    Carta carta[51];
    */
    
    
    Random gerador = new Random();
    
    public Carta[] getBaralho(){
//        carta[0]= new Carta();
//        ....
//        carta[51]= new Carta();
        String naipes="paus  espadaouro  copas ";
        String valores ="A 2 3 4 5 6 7 8 9 10J Q K ";
        int i = 0;
        for (int n=0; n < 24 ; n=n+6) {
            for (int v=0; v <25; v=v+2){
                carta[i] = new Carta();
                carta[i].setNaipe(naipes.substring(n, n+6));
                carta[i].setValor(valores.substring(v, v+2));
                i++;
            }    
        }
        return carta;        
        
    }

    public Carta getCarta(int i){
        if (i>52 || i<1) {
            System.out.println("Não existe essa carta");
            return null;
        }
        else
            return carta[i-1];
    }

    public String getValorCarta(int i){
        if (i>52 || i<1) {
            System.out.println("Não existe essa carta");
            return null;
        }
        else
            return carta[i-1].getValor();
    }
    
    public String getNaipeCarta(int i){
        if (i>52 || i<1) {
            System.out.println("Não existe essa carta");
            return null;
        }
        else
            return carta[i-1].getNaipe();
    }
    
    public void imprimir(){
        for(int i=0; i<52; i++){
            System.out.println(carta[i].getValor());
            System.out.println(carta[i].getNaipe());
        }
    }
    
    public void imprimirCarta(int i){
        if (i>52 || i<1) {
            System.out.println("Não existe essa carta");
        }
        else {
            System.out.println(carta[i-1].getValor());
            System.out.println(carta[i-1].getNaipe());
        }
    }
    
    public void viraTudo(){
         for(int i =0; i<carta.length ; i++) 
             carta[i].virar();         
        
    }
    
 /*  
    public Carta cloneCarta(int i){
        if (i>52 || i<1) {
            System.out.println("Não existe essa carta");
            return null;
        }
        else {
            return new Carta(carta[i-1].getValor(),carta[i-1].getNaipe());
        }
        
    }
 */   
    public void embaralhar(){
         int g;
         Carta temp;
         for(int i =0; i<carta.length ; i++) {
              g = gerador.nextInt(carta.length);
              temp = carta[g];
              carta[g]=carta[i];
              carta[i]=temp;
         }

     }

     public void embaralhar(int j){
         int g;
         Carta temp;
         for (int l =0; l<j; l++){
           // embaralhar();  
           for(int i =0; i<carta.length ; i++) {
              g = gerador.nextInt(carta.length);
              temp = carta[g];
              carta[g]=carta[i];
              carta[i]=temp;
            }
         } 
     }

}
