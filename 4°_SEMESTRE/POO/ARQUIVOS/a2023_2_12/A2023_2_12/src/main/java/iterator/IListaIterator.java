/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package iterator;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author placi
 */
public interface IListaIterator<T> {
    public T next();
    public T get(int i);
    public T previous();
    public boolean hasNext();
    public boolean hasPrevious();
    public void set(T s);
    public void add(T s);


}
