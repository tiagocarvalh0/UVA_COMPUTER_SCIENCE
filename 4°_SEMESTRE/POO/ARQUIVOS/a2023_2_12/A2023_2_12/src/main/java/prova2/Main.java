/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package prova2;

/**
 *
 * @author placi
 */
public class Main {
    public static void main(String[] args) {
        // Cria uma árvore de números inteiros
        Node<Integer> raizInteiro = new Node<>(2);
        raizInteiro.setLeft(new Node<>(1));
        raizInteiro.setRight(new Node<>(3));
        Arvore<Integer> arvoreInteiro = new Arvore<>(raizInteiro);

        Iterador<Integer> iteratorInteiro = arvoreInteiro.criarIterator();
        while (iteratorInteiro.hasNext()) {
            System.out.println("Número: " + iteratorInteiro.next());
        }



        while (iteratorInteiro.hasPrevious()) {
            System.out.println("Número: " + iteratorInteiro.previous());
        }
        
        
        /*
        // Cria uma árvore de strings
        Node<String> raizString = new Node<>("B");
        raizString.setLeft(new Node<>("A"));
        raizString.setRight(new Node<>("C"));
        Arvore<String> arvoreString = new Arvore<>(raizString);

        Iterador<String> iteratorString = arvoreString.criarIterator();
        while (iteratorString.hasNext()) {
            System.out.println("String: " + iteratorString.next());
        }
        */
    }
}
