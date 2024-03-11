/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package factory;

/**
 *
 * @author placi
 */
public abstract class FabricaPersonagem {

    public abstract Personagem criarPersonagem();

    public void jogar() {
        Personagem personagem = criarPersonagem();
        personagem.atacar();
        personagem.defender();
    }

}
