/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package prova1;

/**
 *
 * @author placi
 */
public class Mecanico extends Pessoa{
   private String matricula;

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }

    public Mecanico() {
    }

    public Mecanico(String matricula, String nome, String endereco) {
        super(nome, endereco);
        this.matricula = matricula;
    }
   
}
