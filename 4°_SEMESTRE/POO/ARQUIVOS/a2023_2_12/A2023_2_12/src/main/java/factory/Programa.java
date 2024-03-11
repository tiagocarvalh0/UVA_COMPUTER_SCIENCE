/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package factory;

/**
 *
 * @author placi
 */
public class Programa {

    public static void main(String[] args) {
        FabricaVeiculo fabricaCarro = new FabricaCarro();
        FabricaVeiculo fabricaBicicleta = new FabricaBicicleta();

        Veiculo meuCarro = fabricaCarro.criarVeiculo();
        Veiculo minhaBicicleta = fabricaBicicleta.criarVeiculo();

        meuCarro.montar();
        meuCarro.pintar();

        minhaBicicleta.montar();
        minhaBicicleta.pintar();
    }
}
