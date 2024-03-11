/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package prova2;

/**
 *
 * @author placi
 */
public class Maionese extends CachorroQuenteDecorator{
    public Maionese(CachorroQuente cachorroQuenteDecorada) {
        super(cachorroQuenteDecorada);
    }

    @Override
    public String getDescricao() {
        return super.getDescricao() + ", com maionese";
    }

    @Override
    public double getCusto() {
        return super.getCusto() + 1.0;
    }
    
    
}
