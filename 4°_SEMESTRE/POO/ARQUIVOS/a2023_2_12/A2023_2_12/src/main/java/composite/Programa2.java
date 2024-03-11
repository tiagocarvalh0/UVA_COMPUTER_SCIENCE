/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package composite;

/**
 *
 * @author placi
 */
public class Programa2 {

    public static void main(String[] args) {
        // Criar formas individuais
        FormaGeometrica circulo = new Circulo();
        FormaGeometrica retangulo = new Retangulo();
        FormaGeometrica circulo1 = new Circulo();
        FormaGeometrica retangulo1 = new Retangulo();
        FormaGeometrica circulo2 = new Circulo();
        FormaGeometrica retangulo2 = new Retangulo();
        FormaGeometrica circulo3 = new Circulo();
        FormaGeometrica retangulo3 = new Retangulo();

        // Criar um grupo de formas
        GrupoFormas grupo = new GrupoFormas();
        grupo.adicionarForma(circulo);
        grupo.adicionarForma(retangulo);
        grupo.adicionarForma(circulo1);
        grupo.adicionarForma(retangulo1);
        grupo.adicionarForma(circulo2);
        grupo.adicionarForma(retangulo2);
        grupo.adicionarForma(circulo3);
        grupo.adicionarForma(retangulo3);

        GrupoFormas grupo2 = new GrupoFormas();
        grupo2.adicionarForma(circulo);
        grupo2.adicionarForma(retangulo);
        grupo.adicionarForma(grupo2);
        GrupoFormas grupo3 = new GrupoFormas();
       
        
        
        // Desenhar formas individuais e o grupo
        System.out.println("Desenhando formas individuais:");
        circulo.desenhar();
        retangulo.desenhar();

        System.out.println("\nDesenhando o grupo de formas:");
        grupo.desenhar();
        
        circulo.mover(10, 12);
        
        
        grupo.mover(100, 200);
        
    }

}
