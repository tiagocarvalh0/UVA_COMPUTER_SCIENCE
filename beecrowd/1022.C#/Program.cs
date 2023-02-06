using System;

namespace Program {
class URI {
    static void Main() {
        int Num, N1, N2, D1, D2;
        char Operacao;
        Num = Convert.ToInt16(Console.ReadLine());

        for(int x = 0; x < Num; x++) {
            string[] Parametros = Console.ReadLine().Split(' ');
            N1 = Convert.ToInt32(Parametros[0]);
            N2 = Convert.ToInt32(Parametros[2]);
            Operacao = Convert.ToChar(Parametros[3]);
            D1 = Convert.ToInt32(Parametros[4]);
            D2 = Convert.ToInt32(Parametros[6]);

            if(Operacao == '+')

            //else if(Operacao == '-')
            //else if(Operacao == '*')
            //else if(Operacao == '/')

        }


    }
}
}