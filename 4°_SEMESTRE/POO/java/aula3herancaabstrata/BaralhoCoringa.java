/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula3herancaabstrata;

import java.util.ArrayList;
import java.util.Random;

/**
 *
 * @author placi
 */
public class BaralhoCoringa extends BaralhoGenerico {


    public BaralhoCoringa() {
    }

    public BaralhoCoringa(int i) {
    }

    public ArrayList getBaralho() {
        String naipes = "paus  espadaouro  copas ";
        String valores = "A 2 3 4 5 6 7 8 9 10J Q K ";
        int i = 0;
        for (int n = 0; n < 24; n = n + 6) {
            for (int v = 0; v < 25; v = v + 2) {
                cartas.add(new Carta(naipes.substring(n, n + 6), valores.substring(v, v + 2)));
            }
        }
        cartas.add(new Carta("", "coringa"));
        cartas.add(new Carta("", "coringa"));
        return cartas;

    }

}
