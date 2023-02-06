using System;

namespace Program {
class URI {
    static void Main() {
        int MaiorNum, MenorNum;

        string[] Parameros = Console.ReadLine().Split(' ');

        MaiorNum = Convert.ToInt32(Parameros[0]);
        MenorNum = Convert.ToInt32(Parameros[1]);

        if(MaiorNum < MenorNum) {
            int Aux = MaiorNum;
            MaiorNum = MenorNum;
            MenorNum = Aux;
        }

        if(MaiorNum % MenorNum == 0)
            Console.WriteLine("Sao Multiplos");
        else    
            Console.WriteLine("Nao sao Multiplos");
    }
}
}