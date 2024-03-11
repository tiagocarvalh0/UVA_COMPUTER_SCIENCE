/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package factory;

/**
 *
 * @author placi
 */
public class Bicicleta implements Veiculo {

    @Override
    public void montar() {
        System.out.println("Montando uma bicicleta.");
    }

    @Override
    public void pintar() {
        System.out.println("Pintando a bicicleta.");
    }

}
