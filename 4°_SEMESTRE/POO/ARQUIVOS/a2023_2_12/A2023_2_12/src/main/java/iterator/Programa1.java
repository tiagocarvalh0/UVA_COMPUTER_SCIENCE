/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package iterator;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Vector;

/**
 *
 * @author placi
 */
public class Programa1 {
    public static void main(String[] args) {


        ArrayList<String> lista = new ArrayList();
        LinkedList<String> lista1 = new LinkedList();
        Vector<String> lista2 = new Vector();
        
        
        ListaIterator li = new ListaIterator(lista2);
        li.add("aaaa");
        System.out.println(li.next());
        li.add("bbbb");
        System.out.println(li.next());
        System.out.println(li.previous());
     
        ListaIterator li2 = new ListaIterator(lista1);
        li2.add("zzzz");
        System.out.println(li2.next());
        
        System.out.println(lista1);
        System.out.println(lista2);
        System.out.println(li);
        System.out.println(li2);
        
     
        

    }
            
    
}
