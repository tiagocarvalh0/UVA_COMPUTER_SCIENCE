/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package factory;

/**
 *
 * @author placi
 */
public class FabricaBicicleta implements FabricaVeiculo {
    @Override
    public Veiculo criarVeiculo() {
        return new Bicicleta();
    }

}
