/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package decorator;


/**
 *
 * @author placi
 */
public class CarroEsporte extends CarroDecorator{

    public CarroEsporte(Carro carro) {
        super(carro);
    }
    
    public CarroEsporte(){
        
    }

    @Override
    public double getCusto() {
        if (carro == null)
            return 200000;
        else
            return carro.getCusto()+200000;

    }

    @Override
    public String getComponentes() {
       return carro.getComponentes()+ " componentes de carro esporte ";
    }
    
    
}
