/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package prova11;


/**
 *
 * @author placi
 */
public class Resumido implements Imprimivel{
    public void imprimir(OS os){
        double total =0;
        for (Detalhe d: os.getDetalhes()){
            total = total + (d.getQuantidade()*d.getValor());
        }
        System.out.println(total);
    }
    
}
