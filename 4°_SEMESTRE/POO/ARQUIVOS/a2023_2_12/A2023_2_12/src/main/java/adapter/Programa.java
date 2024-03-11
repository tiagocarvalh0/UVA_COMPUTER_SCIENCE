/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package adapter;

import java.util.ArrayList;

/**
 *
 * @author placi
 */
public class Programa {
    public static void main(String[] args) {
        Lista<String> l = new Lista();
        l.adicionar("aaa");
        l.adicionar("bbbbb");
        l.adicionar("ccccc");
        System.out.println(l.obterPrimeiro());
        System.out.println(l.obterUltimo());
        
        Lista1 l1 = new Lista1(new ArrayList<String>());
        
        System.out.println(Matematica.raiz(4));
        System.out.println(Matematica.maximo(1, 7, 9, 2));
        
        
    }
}
