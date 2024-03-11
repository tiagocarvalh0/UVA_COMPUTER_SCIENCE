/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package prova2;

/**
 *
 * @author placi
 */
public class ArvoreIterator<T> implements Iterador<T> {

    private Node<T> raiz;
    private Node<T> proximo;
    private Node<T> anterior;

    public ArvoreIterator(Node<T> raiz) {
        this.raiz = raiz;
        this.proximo = encontrarMenor(raiz);
        this.anterior = null;
        
        // this.anterior = encontrarMaior(raiz);
    }

    private Node<T> encontrarMenor(Node<T> node) {
        if (node.getLeft() != null) {
            return encontrarMenor(node.getLeft());
        }
        return node;
    }

    private Node<T> encontrarMaior(Node<T> node) {
        if (node.getRight() != null) {
            return encontrarMaior(node.getRight());
        }
        return node;
    }


    @Override
    public T next() {
        if (!hasNext()) {
            return null;
        }

        Node<T> atual = proximo;
        proximo = encontrarSucessor(atual);
        anterior = encontrarAntecessor(atual);
        return atual.getData();
    }

    @Override
    public T previous() {
        if (!hasPrevious()) {
            return null;
        }


        Node<T> atual = anterior;
        anterior = encontrarAntecessor(atual);
        proximo = encontrarSucessor(atual);
        return atual.getData();
    }

    private Node<T> encontrarSucessor(Node<T> node) {
        if (node.getRight() != null) {
            return encontrarMenor(node.getRight());
        }
        Node<T> pai = encontrarPai(raiz, node);
        while (pai != null && node == pai.getRight()) {
            node = pai;
            pai = encontrarPai(raiz, pai);
        }
        return pai;
    }

    private Node<T> encontrarAntecessor(Node<T> node) {
        if (node.getLeft() != null) {
            return encontrarMaior(node.getLeft());
        }
        Node<T> pai = encontrarPai(raiz, node);
        while (pai != null && node == pai.getLeft()) {
            node = pai;
            pai = encontrarPai(raiz, pai);
        }
        return pai;
    }

    private Node<T> encontrarPai(Node<T> raiz, Node<T> node) {
        if (raiz == null || raiz == node) {
            return null;
        }
        if (raiz.getLeft() == node || raiz.getRight() == node) {
            return raiz;
        }
        if (node.getData().hashCode() < raiz.getData().hashCode()) {
            return encontrarPai(raiz.getLeft(), node);
        }
        return encontrarPai(raiz.getRight(), node);
    }

    @Override
    public boolean hasNext() {
        return proximo != null;
    }

    @Override
    public boolean hasPrevious() {
        return anterior != null;
    }

}
