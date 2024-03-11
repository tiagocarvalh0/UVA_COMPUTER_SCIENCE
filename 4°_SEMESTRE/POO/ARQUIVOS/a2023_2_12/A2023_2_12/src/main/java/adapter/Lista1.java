/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package adapter;

import java.util.List;

/**
 *
 * @author placi
 */
public class Lista1<T> implements ILista {
    List lista ;
    
//    ArrayList<String> lista = new ArrayList();
        
    public Lista1(List<T> l){
        lista = l;
    }   

    @Override
    public void adicionar(Object s) {
        lista.add(s);
    }

    @Override
    public void remover(Object s) {
       lista.remove(s);
    }

    @Override
    public void remover(int i) {
       lista.remove(i);
    }

    @Override
    public Object obterPrimeiro() {
        return lista.get(0);
    }

    @Override
    public Object obterUltimo() {
       return lista.get(lista.size()-1);
    }
    
}
