/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package composite;

/**
 *
 * @author placi
 */
public class Circulo implements FormaGeometrica {

    @Override
    public void desenhar() {
        System.out.println("Desenhando um círculo");
    }

    @Override
    public void mover(int x, int y) {
        System.out.println("Movendo um círculo para x: "+ x+"  y: "+y);

    }
    
    
}
