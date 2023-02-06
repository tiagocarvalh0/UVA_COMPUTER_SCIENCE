using System;

class URI {
    static void Main() {
        while(true) {
            int Senha;

            Senha = int.Parse(Console.ReadLine());

            if(Senha == 2002) {
                Console.WriteLine("Acesso Permitido");
                    break;
            }
            else  
                Console.WriteLine("Senha Invalida");  
        }
    }
}