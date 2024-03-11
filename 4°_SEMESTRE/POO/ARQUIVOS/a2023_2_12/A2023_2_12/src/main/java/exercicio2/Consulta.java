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
public class Consulta {
    private String data;
    private ArrayList<Exame> exames = new ArrayList();
    

    public String getData() {
        return data;
    }

    public void setData(String data) {
        this.data = data;
    }

    public Consulta() {
    }

    public Consulta(String data) {
        this.data = data;
    }
    
    public void adicionarExames(Exame exame){
        exames.add(exame);
    }    
    
    
    public ArrayList<Exame> getExames(){
        return exames;
    }
}
