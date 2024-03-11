/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package factory;

/**
 *
 * @author placi
 */
public class Mago  implements Personagem {
    @Override
    public void atacar() {
        System.out.println("O Mago lança um feitiço mágico!");
    }

    @Override
    public void defender() {
        System.out.println("O Mago se defende com um escudo mágico!");
    }
}