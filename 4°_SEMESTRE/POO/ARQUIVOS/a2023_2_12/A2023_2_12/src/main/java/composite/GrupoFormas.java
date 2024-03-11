/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package composite;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author placi
 */
public class GrupoFormas implements FormaGeometrica {
    private List<FormaGeometrica> formas = new ArrayList<>();

    @Override
    public void desenhar() {
        System.out.println("Desenhando um grupo de formas:");
        for (FormaGeometrica forma : formas) {
            forma.desenhar();
        }
    }
    
    @Override
    public void mover(int x, int y) {
        System.out.println("Movendo um grupo de formas:");
        for (FormaGeometrica forma : formas) {
            forma.mover(x,y);
        }

    }

    public void adicionarForma(FormaGeometrica forma) {
        formas.add(forma);
    }

    public void removerForma(FormaGeometrica forma) {
        formas.remove(forma);
    }
}
