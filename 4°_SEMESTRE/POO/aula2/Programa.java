/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula2;

/**
 *
 * @author placi
 */
public class Programa {
    public static void main(String[] args) {
        Carta c,d,f;
        f = new Carta("10");
        f = new Carta("K","espada");
        c = new Carta();  //instanciado
        // Carta c = new Carta();
        // c.naipe = "ouro";
        // c.valor ="10";
        // c.valor = 2;
        c.setNaipe("ouro");
        c.setValor("11"); 
        d = new Carta();
        d.setNaipe("espada");
        d.setValor("A");
        
        System.out.println(d.getNaipe());
        System.out.println(c.getNaipe());
        
        c.virar();
        
        
        System.out.println(d.getNaipe());
        System.out.println(c.getNaipe());
        
        
        Carta e = new Carta();
        e.setTudo("A", "paus");
        e.setTudo("K");
        e.virar();
        e.setTudo();
        System.out.println(e.getNaipe());


       
        Baralho b = new Baralho();
        Carta[] cartas = b.getBaralho();




        cartas[17].virar();
        
        
        
        System.out.println(cartas[17].getNaipe());
        System.out.println(cartas[17].getValor());
        System.out.println(cartas[18].getNaipe());
        System.out.println(cartas[18].getValor());
        
        
        Baralho ba = new Baralho();
        ba.getBaralho();
        
        Carta c1 = ba.getCarta(1);
        
        System.out.println(ba.getCarta(2).getNaipe());
        
        ba.getCarta(3).virar();
        
        System.out.println(ba.getCarta(3).getNaipe());

        
        System.out.println(ba.getCarta(3).getValor());
        
        System.out.println(ba.getValorCarta(3));
        System.out.println(ba.getNaipeCarta(3));
        
        
        ba.imprimir();
        ba.imprimirCarta(3);
        ba.viraTudo();
        ba.imprimir();
        ba.embaralhar();
        ba.imprimir();
        ba.embaralhar(10);
        


        /*
        
        System.out.println("----------------------");
        Carta x; 
        x = b.getCarta(17);
        x.virar();
        System.out.println(x.getValor());
        System.out.println(b.getCarta(17).getNaipe());
        System.out.println(b.getNaipeCarta(17));

        
        
        
        b.embaralhar();
        x = b.getCarta(17);
        x.virar();
        System.out.println(x.getValor());
        b.imprimir();
        b.viraTudo();
        b.imprimir();
        
        */
        
    }
    
}
