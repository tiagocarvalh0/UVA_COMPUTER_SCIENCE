/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula5;

/**
 *
 * @author placido
 */
public class Programa {
    public static void main(String[] args) {
        Estado e1 = new Estado();
        e1.setNome("Ceara");
        e1.setPopulacao(6500000);
        e1.setTerritorio(800000);
        
        
        Estado e2 = new Estado("Pernambuco",8000000,400000);
        
        //Obter o nome do estado
        System.out.println(e1.getNome());
        System.out.println(e2.getNome());


        Cidade c1 = new Cidade();
        c1.setNome("Sobral");
        c1.setPopulacao(150000);
        c1.setTerritorio(20000);
        c1.setUf(e1);
//        e1=null;
        
//        Cidade c3 = new Cidade("Rio de Janeiro",6000000,20000,new Estado("Rio de Janeiro",1000000,200000) );   //composição

        
//        Cidade c4 = new Cidade("Niteroi", 1000000,20000,)        
        
        Cidade c2 = new Cidade("Recife",2000000, 10000);   // agregação
        
        c2.setUf(e2);

        c2 = new Cidade("Recife",2000000, 10000,e2);   // agregação
        
//        c1 = null;  // não apaga e1  Agregação
              
        
        
        
        
        
        
        // Obter o nome da cidade
        System.out.println(c1.getNome());
        System.out.println(c2.getNome());
  


        System.out.println(c2.getUf().getNome());
        System.out.println(c2.getEstadoNome());



        System.out.println(c2.getPopulacao());
        System.out.println(c2.getUf().getPopulacao());
        System.out.println(c2.getEstadoPopulacao());
        
        
        
        // obter o nome do estado de uma determinada cidade
        System.out.println(c1.getNome()+ "  -   "+ c1.getUf().getNome());
        System.out.println(c2.getNome()+ "  -   "+ c2.getUf().getNome());
        
        
        
        System.out.println(c1.getNome()+ "  -   "+ c1.getEstadoNome());
        System.out.println(c2.getNome()+ "  -   "+ c2.getEstadoNome());



        System.out.println(c1.getNome()+" - "+ c1.getPopulacao()+" - "+c1.getEstadoNome()+"  "+c1.getEstadoPopulacao());
        System.out.println(c1.getUf().getPopulacao());


        Pessoa p = new Pessoa();
        
        
        p.setNome("jose");
        p.setCpf("121212112");
        p.setRg("121212122");
        p.setEndereco("rua a 230");
        p.setCidade(c1);
        System.out.println(p.getCidade().getUf().getNome());
        System.out.println(p.getCidade().getEstadoNome());
        System.out.println(p.getNomeCidade());
        System.out.println(p.getNomeEstado());
        
        p=null;
        
        
        
        
        p = null;
                
        
        System.out.println(p.getCidade().getNome());
        System.out.println(p.getCidade().getUf().getNome());
        System.out.println(p.getCidade().getEstadoNome());
        
        System.out.println(p.getNomeCidade());
        System.out.println(p.getNomeEstado());
        
//         
        
        
        
    }
    
}
