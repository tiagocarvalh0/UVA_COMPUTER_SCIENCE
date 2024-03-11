/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula3herancasimples;

import java.util.ArrayList;
import java.util.Random;

/**
 *
 * @author placi
 */
public class BaralhoGenerico {

    protected ArrayList<Carta> cartas = new ArrayList();

    protected Random gerador = new Random();

    public BaralhoGenerico() {
    }

    public BaralhoGenerico(int i) {
    }

    public ArrayList getBaralho() {
        return null;
    }

    public Carta getCarta(int i) {
        if (i > cartas.size() || i < 1) {
            System.out.println("Não existe essa carta");
            return null;
        } else {
            return cartas.get(i - 1);
        }
    }

    public String getValorCarta(int i) {
        if (i > cartas.size() || i < 1) {
            System.out.println("Não existe essa carta");
            return null;
        } else {
            return cartas.get(i - 1).getValor();
        }
    }

    public String getNaipeCarta(int i) {
        if (i > cartas.size() || i < 1) {
            System.out.println("Não existe essa carta");
            return null;
        } else {
            return cartas.get(i - 1).getNaipe();
        }
    }

    public void imprimir() {
        for (int i = 0; i < cartas.size(); i++) {
            System.out.println(cartas.get(i).getValor());
            System.out.println(cartas.get(i).getNaipe());
        }
    }

    public void imprimir2() {
        for (Carta c : cartas) {
            System.out.println(c.getValor());
            System.out.println(c.getNaipe());
        }
    }

    public void imprimirCarta(int i) {
        if (i > cartas.size() || i < 1) {
            System.out.println("Não existe essa carta");
        } else {
            System.out.println(cartas.get(i - 1).getValor());
            System.out.println(cartas.get(i - 1).getNaipe());
        }
    }

    public Carta cloneCarta(int i) {
        if (i > cartas.size() || i < 1) {
            System.out.println("Não existe essa carta");
            return null;
        } else {
            return new Carta(cartas.get(i - 1).getValor(), cartas.get(i - 1).getNaipe());
        }

    }

    public void embaralhar() {
        int g;
        Carta temp;
        System.out.println(cartas.size());
        for (int i = 0; i < cartas.size(); i++) {
            g = gerador.nextInt(cartas.size());
            /*
              temp = carta[g];
              carta[g]=carta[i];
              carta[i]=temp;
             */

            temp = cartas.get(g);  // 51
            cartas.set(g, cartas.get(i));
            cartas.set(i, temp);
        }

    }

    public void embaralhar(int j) {   //overload ou sobrecarga
        int g;
        Carta temp;
        for (int l = 0; l < j; l++) {
            for (int i = 0; i < cartas.size(); i++) {
                g = gerador.nextInt(cartas.size());
                /*
              temp = carta[g];
              carta[g]=carta[i];
              carta[i]=temp;
                 */

                temp = cartas.get(g);
                cartas.set(g, cartas.get(i));
                cartas.set(i, temp);
            }
        }
    }

    public void virar(int i) {
        if (i > cartas.size() || i < 1) {
            System.out.println("Não existe essa carta");
        } else {
            cartas.get(i - 1).virar();
        }

    }

    /* Exeplos de overload (sobrecarga)     
    public void embaralhar(double j){
        
    }

    public void embaralhar(int i, int j){
        
    }


    
    public void embaralhar(double i, double j){
        
    }
    
    public void embaralhar(double i, int j){
        
    }
    

     */
    public void virarTodas() {
        for (int i = 0; i < cartas.size(); i++) {
            cartas.get(i).virar();
        }

    }

    public void virarTodas2() {
        for (Carta ct : cartas) {
            ct.virar();
        }

    }

}
