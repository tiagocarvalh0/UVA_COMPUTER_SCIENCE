/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package dec;

/**
 *
 * @author placi
 */
public class CarroEsporte extends CarroDecorator{

    public CarroEsporte(Carro carro) {
        super(carro);
    }
    

    @Override
    public double getCusto() {
        return carro.getCusto()+200000;

    }

    @Override
    public String getComponentes() {
       return carro.getComponentes()+ " componentes de carro esporte ";
    }
    
    
}
