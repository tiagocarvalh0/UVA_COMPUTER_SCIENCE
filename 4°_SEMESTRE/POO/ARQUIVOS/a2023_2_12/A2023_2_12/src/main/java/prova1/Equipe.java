/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package prova1;

import java.util.ArrayList;

/**
 *
 * @author placi
 */
public class Equipe {
    private ArrayList<Mecanico> mecanicos = new ArrayList();
    
    public void adicionarMecanico(Mecanico mec){
        mecanicos.add(mec);
    }
    
    public void removerMecanico(Mecanico mec){
        mecanicos.remove(mec);
    }
    
}
