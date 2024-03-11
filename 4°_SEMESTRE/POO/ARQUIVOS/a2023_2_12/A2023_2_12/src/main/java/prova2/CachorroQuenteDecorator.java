/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package prova2;

/**
 *
 * @author placi
 */
public class CachorroQuenteDecorator   implements CachorroQuente {
    private CachorroQuente cachorroQuenteDecorada;

    public CachorroQuenteDecorator(CachorroQuente cachorroQuenteDecorada) {
        this.cachorroQuenteDecorada = cachorroQuenteDecorada;
    }

    @Override
    public String getDescricao() {
        return cachorroQuenteDecorada.getDescricao();
    }

    @Override
    public double getCusto() {
        return cachorroQuenteDecorada.getCusto();
    }
}
