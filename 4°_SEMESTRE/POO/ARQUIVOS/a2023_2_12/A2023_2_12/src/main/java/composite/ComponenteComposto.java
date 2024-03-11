/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package composite;

import java.util.ArrayList;

/**
 *
 * @author placi
 */
public class ComponenteComposto extends Componente {

    private ArrayList<Componente> filhos = new ArrayList();

    public ComponenteComposto() {
    }

    public ComponenteComposto(String nome, double valor) {
        super(nome, valor);
    }

    public void addicionarComponente(Componente c) {
        filhos.add(c);
    }

    public void removerComponente(Componente c) {
        filhos.remove(c);
    }

    @Override
    public double getValor() {
        double valorA = valor;
        for (Componente c : filhos) {
            valorA = c.getValor() + valorA;
        }
        return valorA;
    }

    public String getNome() {
        String valorA = nome;
        for (Componente c : filhos) {
            valorA = c.getNome() + " " + valorA;
        }
        return valorA;
    }

}
