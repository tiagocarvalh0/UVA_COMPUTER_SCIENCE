/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package prova1;

/**
 *
 * @author placi
 */
public class Detalhe {
    
    private double quantidade,valor;
    private Peca peca;
    private Servico servico;

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

    public Peca getPeca() {
        return peca;
    }

    public void setPeca(Peca peca) {
        this.peca = peca;
    }

    public Servico getServico() {
        return servico;
    }

    public void setServico(Servico servico) {
        this.servico = servico;
    }

    public Detalhe() {
    }

    public Detalhe(Peca peca, double quantidade, double valor) {
        this.quantidade = quantidade;
        this.valor = valor;
        this.peca = peca;
    }

    public Detalhe(Servico servico, double quantidade, double valor) {
        this.quantidade = quantidade;
        this.valor = valor;
        this.servico = servico;
    }
    
    
    
}
