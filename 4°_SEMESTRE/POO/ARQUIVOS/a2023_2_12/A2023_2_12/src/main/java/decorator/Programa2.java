/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package decorator;

/**
 *
 * @author placi
 */
public class Programa2 {

    public static void main(String[] args) {
        // Preparar um café simples
        Bebida meuCafe = new Cafe();

        // Adicionar leite ao café
        meuCafe = new Leite(meuCafe);

        // Adicionar açúcar ao café
        meuCafe = new Acucar(meuCafe);

        Bebida meuCafe2 = new Leite(new Acucar(new Chocolate(new Cafe())));

        // Imprimir descrição e custo final
        System.out.println("Bebida: " + meuCafe.getDescricao());
        System.out.println("Custo: $" + meuCafe.getCusto());

        System.out.println("Bebida: " + meuCafe2.getDescricao());
        System.out.println("Custo: $" + meuCafe2.getCusto());

    }

}
