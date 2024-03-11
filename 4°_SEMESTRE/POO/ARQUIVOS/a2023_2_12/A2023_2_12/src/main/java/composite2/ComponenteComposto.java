/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package composite2;

import composite.*;
import java.util.ArrayList;

/**
 *
 * @author placi
 */
public class ComponenteComposto {
    private String nome;
    private double valor;
    private ArrayList<ComponenteComposto> filhos = new ArrayList();


    public void setNome(String nome) {
        this.nome = nome;
    }


    public void setValor(double valor) {
        this.valor = valor;
    }



    public ComponenteComposto() {
    }

    public ComponenteComposto(String nome, double valor) {
        this.nome=nome;
        this.valor = valor;
    }

    public void addicionarComponente(ComponenteComposto c) {
        filhos.add(c);
    }

    public void removerComponente(ComponenteComposto c) {
        filhos.remove(c);
    }

    public double getValor() {
        double valorA = valor;
        for (ComponenteComposto c : filhos) {
            valorA = c.getValor() + valorA;
        }
        return valorA;
    }

    public String getNome() {
        String valorA = nome;
        for (ComponenteComposto c : filhos) {
            valorA = c.getNome() + " " + valorA;
        }
        return valorA;
    }

}
