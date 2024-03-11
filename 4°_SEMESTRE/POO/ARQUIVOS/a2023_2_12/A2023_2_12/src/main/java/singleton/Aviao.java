/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package singleton;


/**
 *
 * @author placi
 */
public class Aviao {
    private String marca, modelo;
    private boolean estaSolo=true;
    public Aviao() {
    }

    public Aviao(String marca, String modelo) {
        this.marca = marca;
        this.modelo = modelo;
    }
       

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }
    
    public void decolar(){
        estaSolo=false;
    }
    
    public void pousar(){
        estaSolo=true;
    }
    public String estado(){
        if (estaSolo)
            return "Pousado";
        else
            return "no ar";
    }

    public void estado1(){
        if (estaSolo)
            System.out.println("Pousado");
        else
            System.out.println("no ar");
    }

    
}
