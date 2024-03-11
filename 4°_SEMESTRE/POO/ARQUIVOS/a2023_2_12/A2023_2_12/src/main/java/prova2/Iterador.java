/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package prova2;

/**
 *
 * @author placi
 */
public interface Iterador<T> {
    T next();
    boolean hasNext();
    T previous();
    boolean hasPrevious();
}
