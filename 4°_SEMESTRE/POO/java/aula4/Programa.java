/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula4;

/**
 *
 * @author placi
 */
public class Programa {

    public static void main(String[] args) {
        AtributoEstatico obj1 = new AtributoEstatico();
        obj1.a = 1;
        obj1.b = 2;
        obj1.c = 3;
        AtributoEstatico obj2 = new AtributoEstatico();
        obj2.a = 10;
        obj2.b = 20;
        obj2.c = 30;
        AtributoEstatico.c= 300;
        System.out.println(obj1.a);
        System.out.println(obj1.b);
        System.out.println(obj2.a);
        System.out.println(obj2.b);
        System.out.println(obj1.c);
        System.out.println(obj2.c);
        
        obj1.setA(11);
        obj2.setA(101);
        AtributoEstatico.setC(300000);
        obj1.setC(20);
        System.out.println(obj2.c);
        System.out.println(Math.PI);
//        Math.PI=2;
//        AtributoEstatico.PI =2;

         Equacao2Grau.setA(-1);
         Equacao2Grau.setB(2);
         Equacao2Grau.setC(3);
         System.out.println(Equacao2Grau.x1());
         System.out.println(Equacao2Grau.x2());
         Equacao2Grau.setAll(-2, 7, 100);
         System.out.println(Equacao2Grau.x1());
         System.out.println(Equacao2Grau.x2());
         System.out.println(Cpf.validaCPF("31019242352"));
         
         
         

        
        
        
        
        
        

    }
}
