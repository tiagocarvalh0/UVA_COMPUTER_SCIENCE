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
public class Pessoa {
    private String nome, cpf, rg, endereco;
    private Cidade cidade;

    public Pessoa() {
    }

    public Pessoa(String nome, String cpf, String rg, String endereco, Cidade cidade) {
        this.nome = nome;
        this.cpf = cpf;
        this.rg = rg;
        this.endereco = endereco;
        this.cidade = cidade;
    }

    public Pessoa(String nome, String cpf, String rg, String endereco) {
        this.nome = nome;
        this.cpf = cpf;
        this.rg = rg;
        this.endereco = endereco;
    }
    
   

    public void setTudo(String nome, String cpf, String rg, String endereco, Cidade cidade) {
        this.nome = nome;
        this.cpf = cpf;
        this.rg = rg;
        this.endereco = endereco;
        this.cidade = cidade;
    }

    public void setTudo(String nome, String cpf, String rg, String endereco) {
        this.nome = nome;
        this.cpf = cpf;
        this.rg = rg;
        this.endereco = endereco;
    }
    
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public String getRg() {
        return rg;
    }

    public void setRg(String rg) {
        this.rg = rg;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public Cidade getCidade() {
        return cidade;
    }

    public void setCidade(Cidade cidade) {
        this.cidade = cidade;
    }
    
    public String getNomeCidade(){
        if (cidade == null)
            return "";
        else 
            return cidade.getNome();
    }
    
    public String getNomeEstado(){
//        return cidade.getEstadoNome();
        if (cidade == null)
            return "";
        else
           if (cidade.getUf() == null)
               return "";
           else 
               return cidade.getUf().getNome();
    }
    
    // 2 tipos de associação
    // Agregação - Fraco 
    // Composição - Forte
}
