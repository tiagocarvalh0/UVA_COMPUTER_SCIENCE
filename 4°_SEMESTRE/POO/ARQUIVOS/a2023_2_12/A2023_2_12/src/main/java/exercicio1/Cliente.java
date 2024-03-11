/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio1;

/**
 *
 * @author placi
 */
public class Cliente extends Pessoa{
    private int codigo;
    private Pacote pacote;

    public Pacote getPacote() {
        return pacote;
    }

    public void setPacote(Pacote pacote) {
        this.pacote = pacote;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }


    public int getCodigo() {
        return codigo;
    }


    public Cliente(int codigo, String cpf, String nome) {
        super(cpf, nome);
        this.codigo = codigo;
    }
    
    
    public void imprimirPacoteResumido(){
        pacote.imprimirResumido();
    }
    
    public void imprimirPacoteCompleto(){
        pacote.imprimirCompleto();
    }
    
    
    
}
