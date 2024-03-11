/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package decorator;


/**
 *
 * @author placi
 */
public class CarroLuxo  extends CarroDecorator{

    public CarroLuxo(Carro carro) {
        super(carro);
    }
    

    @Override
    public double getCusto() {
        return carro.getCusto()+100000;
    }

    @Override
    public String getComponentes() {
       return carro.getComponentes()+ " componentes de carro de luxo ";
    }
    
    
}
