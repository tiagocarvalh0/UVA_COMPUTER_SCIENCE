/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package iterator;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author placi
 * @param <T>
 */
public class ListaIterator<T> implements IListaIterator{
    private int posicao = -1;
    List<T> lista ;
    
    public ListaIterator(List<T> lista){
        this.lista = lista;
    }

    @Override
    public T  next() {  
      posicao++;
      return lista.get(posicao);
    }
    
    public T get(int i){
        return lista.get(i);
    }
    
    public T previous(){
        posicao--;
        return lista.get(posicao);
    }
    
    public boolean hasNext(){
        return (posicao +1 <= lista.size()-1);
    }

    public boolean hasPrevious(){
        return (posicao - 1 >= lista.size()-1);
    }

    @Override
    public void set(Object s) {
       lista.set(posicao, (T) s);
    }
    
    public void add(Object s){
        lista.add((T) s);
    }
    
    public String toString(){
        return lista.toString();
    }
}
