/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula4;

/**
 *
 * @author placido
 */
public class AtributoEstatico {
    public int a,b;
    public static int c;
    public static final double PI= Math.PI;
    

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

    public static int getC() {
        return c;
    }

    public static void setC(int c) {
        AtributoEstatico.c = c;
    }
    
    
}
