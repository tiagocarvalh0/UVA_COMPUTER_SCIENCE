/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio2;

import java.util.ArrayList;

/**
 *
 * @author placi
 */
public class Tecnico extends Empregado{
    private ArrayList<Modelo> experiencia = new ArrayList();

    public Tecnico() {
    }

    public Tecnico(String cpf, String nome, String telefone, double salario) {
        super(cpf, nome, telefone, salario);
    }
    
    public void adicionarModelo(Modelo modelo){
        experiencia.add(modelo);
    }
    
}
