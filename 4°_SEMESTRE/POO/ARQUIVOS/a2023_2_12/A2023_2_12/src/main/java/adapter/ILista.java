/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package adapter;

/**
 *
 * @author placi
 */
public interface ILista<T> {
        
    public void adicionar(T s);
    public void remover(T s);
    public void remover(int i);
    public T obterPrimeiro();
    public T obterUltimo();    
    
}
