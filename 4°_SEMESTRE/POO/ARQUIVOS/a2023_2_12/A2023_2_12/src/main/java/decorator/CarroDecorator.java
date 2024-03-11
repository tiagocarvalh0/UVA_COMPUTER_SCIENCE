/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package decorator;


/**
 *
 * @author placi
 */
public abstract class CarroDecorator implements Carro {
    protected Carro carro;

    public Carro getCarro() {
        return carro;
    }

    public void setCarro(Carro carro) {
        this.carro = carro;
    }
    
    @Override
    public abstract double getCusto();
    
    @Override
    public abstract String getComponentes();

    public CarroDecorator(Carro carro) {
        this.carro = carro;
    }

    public CarroDecorator() {
    }
    
}
