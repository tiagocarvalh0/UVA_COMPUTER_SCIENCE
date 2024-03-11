/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package factory;

/**
 *
 * @author placi
 */
public class Guerreiro   implements Personagem {
    @Override
    public void atacar() {
        System.out.println("O Guerreiro ataca com sua espada!");
    }

    @Override
    public void defender() {
        System.out.println("O Guerreiro se defende com seu escudo!");
    }
}
