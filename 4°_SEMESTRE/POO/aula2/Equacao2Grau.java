/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula2;



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
    private int a,b,c;
    // sets e gets
    public int getA() {
        return a;
    }

    public void setA(int a) {
        this.a = a;
    }
   
    public int getB() {
        return b;
    }

    public void setB(int b) {
        this.b = b;
    }

    public int getC() {
        return c;
    }

    public void setC(int c) {
        this.c = c;
    }
    

   //overload ou sobrecarga
    public void setAll(int a, int b, int c){
        this.a = a;
        this.b = b;
        this.c = c;
    }
    
    public void setAll(int a, int b){
        this.a = a;
        this.b = b;
        this.c = 0;
    }

   
    public void setAll(int a){
        this.a = a;
        this.b = 0;
        this.c = 0;
    }
    

    public Equacao2Grau(int a, int b, int c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public Equacao2Grau(int a, int b) {
        this.a = a;
        this.b = b;
        this.c = 0;
    }    

    public Equacao2Grau(int a) {
        this.a = a;
        this.b = 0;
        this.c = 0;
    }    
    
    public Equacao2Grau() {
    }
    
    public double delta(){
        return b*b-4*a*c;
    }
    
    public double x1(){
            return ((-b - Math.sqrt(delta()))/(2*a));
    }
    
    public double x2(){
            return ((-b + Math.sqrt(delta()))/(2*a));
    }
    
    
    
}
