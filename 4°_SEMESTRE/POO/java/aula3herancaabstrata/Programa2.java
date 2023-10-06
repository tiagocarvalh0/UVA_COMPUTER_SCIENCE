/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula3herancaabstrata;

/**
 *
 * @author placi
 */
public class Programa2 {
    public static void main(String[] args) {
        Cao a = new Cao();
        a.som();
        System.out.println(a.L);
//        a.L=3;
        Cao b = new Cao("zara");
        b.som();
        Animal c = new Cao();
        c.som();
        
        Animal d = c;
        Animal e = a;
        
        Cao f = (Cao) d;
        f.som();
        
        
        
        
        
        
        
        
    }
    
}
