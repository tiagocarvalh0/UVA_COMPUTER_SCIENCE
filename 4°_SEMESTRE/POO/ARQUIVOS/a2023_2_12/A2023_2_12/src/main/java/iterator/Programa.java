/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package iterator;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.ListIterator;

/**
 *
 * @author placi
 */
public class Programa {
    public static void main(String[] args) {
       
        ArrayList<String> s = new ArrayList();
        s.add("aaa");
        s.add("bbbb");
        s.add("cccc");
        for (String ss: s){
            System.out.println(ss);
        }
                
        Iterator i = s.iterator();
        System.out.println(i.next());
        System.out.println(i.next());
        i.remove();
        for (String ss: s){
            System.out.println(ss);
        }
              
        
        ListIterator j =  s.listIterator();
        
        j.add("dddd");
        for (String ss: s){
            System.out.println(ss);
        }

        j.next();
        j.add("eee");
        for (String ss: s){
            System.out.println(ss);
        }
        j.next();
        j.add("ffff");
        for (String ss: s){
            System.out.println(ss);
        }
        
        for (;j.hasPrevious();){
            System.out.println(j.previous());
        }
        
        
    }
    
}
