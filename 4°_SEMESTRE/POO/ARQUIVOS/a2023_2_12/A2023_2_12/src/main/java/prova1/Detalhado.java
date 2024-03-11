/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package prova1;

/**
 *
 * @author placi
 */
public class Detalhado implements Imprimivel {
    public void imprimir(OS os){
        double total =0;
        for (Detalhe d: os.getDetalhes()){
            if (d.getPeca() != null)
                System.out.println(d.getPeca().getNome());
            if (d.getServico() != null)
                System.out.println(d.getServico().getNome());
            System.out.println(d.getValor());
            System.out.println(d.getQuantidade());
            System.out.println(d.getValor()*d.getQuantidade());
            total = total + (d.getQuantidade()*d.getValor());
        }
        System.out.println(total);
    }
    
}
