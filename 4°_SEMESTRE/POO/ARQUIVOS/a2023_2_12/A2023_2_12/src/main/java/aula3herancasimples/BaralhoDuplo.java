/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula3herancasimples;

import java.util.ArrayList;

/**
 *
 * @author placi
 */
public class BaralhoDuplo extends BaralhoGenerico {

    public BaralhoDuplo() {

    }

    public BaralhoDuplo(int i) {

    }

    public ArrayList getBaralho() {   //override ou sobrescrito
        for (int i = 0; i < 2; i++) {
            String naipes = "paus  espadaouro  copas ";
            String valores = "A 2 3 4 5 6 7 8 9 10J Q K ";
            for (int n = 0; n < 24; n = n + 6) {
                for (int v = 0; v < 25; v = v + 2) {
                    cartas.add(new Carta(naipes.substring(n, n + 6), valores.substring(v, v + 2)));
                }
            }
        }

        return cartas;

    }

    public void virarDuplo(int i, int j) {
        if (i > cartas.size() || i < 1) {
            System.out.println("Não existe essa carta");
        } else {
            cartas.get(i - 1).virar();
        }

        if (j > cartas.size() || j < 1) {
            System.out.println("Não existe essa carta");
        } else {
            cartas.get(j - 1).virar();
        }

    }

}
