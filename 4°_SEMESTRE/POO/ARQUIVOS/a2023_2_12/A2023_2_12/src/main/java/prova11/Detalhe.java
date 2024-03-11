/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package prova11;



/**
 *
 * @author placi
 */
public class Detalhe {
    
    private double quantidade,valor;
    private Item item;
    

    public double getQuantidade() {
        return quantidade;
    }

    public void setQuantidade(double quantidade) {
        this.quantidade = quantidade;
    }

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }

    public Item getItem() {
        return item;
    }

    public void setItem(Item item) {
        this.item = item;
    }



    private Detalhe() {
    }

    private Detalhe(Item item, double quantidade, double valor) {
        this.quantidade = quantidade;
        this.valor = valor;
        this.item = item;
    }
    
    public static Detalhe criarDetalhe(){
        return new Detalhe();
    }

    public static Detalhe criarDetalhe(Item item, double quantidade, double valor){
        return new Detalhe(item,quantidade,valor);
    }
    
    
}
