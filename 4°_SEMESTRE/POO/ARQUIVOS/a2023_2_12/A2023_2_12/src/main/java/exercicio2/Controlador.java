/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio2;

import java.util.ArrayList;
import java.util.Date;

/**
 *
 * @author placi
 */
public class Controlador extends Empregado {

    private ArrayList<Consulta> consultas = new ArrayList();

    public Controlador() {
    }

    public Controlador(String cpf, String nome, String telefone, double salario) {
        super(cpf, nome, telefone, salario);
    }

    /*
    public void adicionarConsulta(Consulta consulta){  // agregação
        consultas.add(consulta);
    }
     */

    public void adicionarConsulta(String data) { //composição
        consultas.add(new Consulta(data));
    }

    public void adicionarExame(String data, Exame exame) {
        int i = 0;
        for (Consulta c : consultas) {
            if (c.getData().equals(data)) {
                consultas.get(i).adicionarExames(exame);
            }
            i++;
        }
    }

    public void imprimir() {
        for (Consulta c : consultas) {
            System.out.println(c.getData());
            for(Exame e: c.getExames()){
                System.out.println(e.getNome());
            }
        }

    }
    
    
    public void apagarConsulta(String data){
        int i = 0;
        int j = -1;
        for (Consulta c : consultas) {
            if (c.getData().equals(data)) {
                j=i;
            }
            i++;
        }
        if (j>=0){
            consultas.remove(j);
        }
        
    }

}
