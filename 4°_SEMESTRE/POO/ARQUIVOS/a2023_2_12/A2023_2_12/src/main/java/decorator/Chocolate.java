/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package decorator;

/**
 *
 * @author placi
 */
public class Chocolate extends BebidaDecorator {

    public Chocolate(Bebida bebidaDecorada) {
        super(bebidaDecorada);
    }

    @Override
    public String getDescricao() {
        return super.getDescricao() + ", com Chocolate";
    }

    @Override
    public double getCusto() {
        return super.getCusto() + 0.5;
    }

}
