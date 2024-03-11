/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio2;

/**
 *
 * @author placi
 */
public class Programa2 {
    public static void main(String[] args) {
        Modelo m1 = new Modelo();
        m1.setCodigo(1);
        m1.setCapacidade(200);
        m1.setPeso(2);
        Modelo m2 = new Modelo();
        m2.setCodigo(2);
        m2.setCapacidade(230);
        m2.setPeso(3);
        Aviao a1 = new Aviao();
        a1.setCpf("1");
        a1.setRegistro("121212");
        a1.setModelo(m1);
        Tecnico t1 = new Tecnico();
        t1.setCpf("1");
        t1.setNome("jose");
        t1.setSalario(8000);
        t1.setTelefone("2112121212");
        t1.adicionarModelo(m1);
        t1.adicionarModelo(m2);
        Controlador c1 = new Controlador();
        c1.setCpf("2");
        c1.setNome("maria");
        c1.setSalario(10000);
        c1.setTelefone("78787887");
        Exame ex1 = new Exame();
        Exame ex2 = new Exame();
        ex1.setNome("sangue");
        ex2.setNome("Urina");
       

        c1.adicionarConsulta("12/01/2023");
        c1.adicionarConsulta("12/09/2023");
        c1.adicionarConsulta("01/10/2023");


        c1.adicionarExame("12/01/2023", ex1);
        c1.adicionarExame("12/01/2023", ex2);
        c1.adicionarExame("12/09/2023", ex2);
        c1.adicionarExame("01/10/2023", ex1);
        c1.imprimir();
        
        c1.apagarConsulta("01/10/2023");
        c1.imprimir();

        
        
        
                
        
                
        
    }
    
}
