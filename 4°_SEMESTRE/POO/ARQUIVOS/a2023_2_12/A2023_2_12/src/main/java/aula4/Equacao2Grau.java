/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula4;

import aula2.*;



/**
 ax2 + bx + c = 0
 delta = b2 -4*a*c
 x' = (-b - Raiz(delta))/(2*a)
 x'' = (-b + Raiz(delta))/(2*a)
 
 * 
 * 
 * @author placido
 */
public class Equacao2Grau {
    private static int a,b,c;
    // sets e gets
    public static int getA() {
        return a;
    }

    public static void setA(int a) {
        Equacao2Grau.a = a;
    }
   
    public static  int getB() {
        return b;
    }

    public static void setB(int b) {
        Equacao2Grau.b = b;
    }

    public static  int getC() {
        return c;
    }

    public static void setC(int c) {
        Equacao2Grau.c = c;
    }
    

   //overload ou sobrecarga
    public static void setAll(int a, int b, int c){
        Equacao2Grau.a = a;
        Equacao2Grau.b = b;
        Equacao2Grau.c = c;
    }
    
    public static void setAll(int a, int b){
        Equacao2Grau.a = a;
        Equacao2Grau.b = b;
        Equacao2Grau.c = 0;
    }

   
    public static void setAll(int a){
        Equacao2Grau.a = a;
        Equacao2Grau.b = 0;
        Equacao2Grau.c = 0;
    }
    


    
    public static double delta(){
        return b*b-4*a*c;
    }
    
    public static  double x1(){
            return ((-b - Math.sqrt(delta()))/(2*a));
    }
    
    public static double x2(){
            return ((-b + Math.sqrt(delta()))/(2*a));
    }
    
    
    
}
