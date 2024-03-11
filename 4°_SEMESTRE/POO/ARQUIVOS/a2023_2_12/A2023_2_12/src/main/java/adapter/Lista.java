/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package adapter;

import java.util.ArrayList;

/**
 *
 * @author placi
 */
public class Lista<T>  extends ArrayList<T> implements ILista{
    
    public void adicionar(Object s){
        add((T) s);
    }
    public void remover(Object s){
        remove(s);
    }    
    
    public void remover(int i){
        remove(i);
    }
    
    public T obterPrimeiro(){
        return get(0) ;
    }
    
    public T obterUltimo(){
        return get(size()-1);
    }
    
    
    
    
    
}
