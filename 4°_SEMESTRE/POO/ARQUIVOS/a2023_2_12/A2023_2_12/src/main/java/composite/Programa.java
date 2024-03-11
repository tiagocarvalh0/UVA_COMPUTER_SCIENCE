/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package composite;

/**
 *
 * @author placi
 */
public class Programa {
    public static void main(String[] args) {
        ComponenteSimples a = new ComponenteSimples("memoria", 100);
        ComponenteSimples b = new ComponenteSimples("processador", 600);
        ComponenteSimples c = new ComponenteSimples("Placa Video", 500);
        ComponenteComposto d = new ComponenteComposto("Placa Mae", 700);
        System.out.println(a.getNome());
        System.out.println(a.getValor());
        System.out.println(d.getNome());
        System.out.println(d.getValor());
        d.addicionarComponente(a);
        d.addicionarComponente(b);
        System.out.println(d.getNome());
        System.out.println(d.getValor());
        ComponenteComposto computador = new ComponenteComposto("Computador",0);
        computador.addicionarComponente(c);
        computador.addicionarComponente(d);
        System.out.println(computador.getNome());
        System.out.println(computador.getValor());
/*                
        Detalhe d =new Detalhe(p1,2,2);
        Detalhe e =new Detalhe(p2,2,3);
        Detalhe f =new Detalhe(p3,2,4);
        d.adicionaDetalhe(e);
        e.adicionaDetalhe(f);
        
*/
        
        
        
    }
    
}
