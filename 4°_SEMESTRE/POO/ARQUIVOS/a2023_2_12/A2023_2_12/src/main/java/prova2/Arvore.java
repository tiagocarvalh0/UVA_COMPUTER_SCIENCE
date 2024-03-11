/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package prova2;

/**
 *
 * @author placi
 */
public class Arvore<T> {

    private Node<T> raiz;

    public Arvore(Node<T> raiz) {
        this.raiz = raiz;
    }

    public Iterador<T> criarIterator() {
        return new ArvoreIterator<>(raiz);
    }
}