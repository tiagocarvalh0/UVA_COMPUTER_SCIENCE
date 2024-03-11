/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package membro;

/**
 *
 * @author placi
 */
class A {

    public String nome = "a";
    public String sobrenome = "s";

    public class B {

        public String nome = "b";

        public class C {

            public String nome = "c";

            public void imprime() {
                System.out.println(nome);
                System.out.println(this.nome);
                System.out.println(C.this.nome);
                System.out.println(B.this.nome);
                System.out.println(A.this.nome);
                System.out.println(sobrenome);
            }
        }
    }
}
