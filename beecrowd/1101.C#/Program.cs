using System;

class URI {
    static void Main(string[] args){
        while(true){
            int MaiorNum, MenorNum, Soma = 0;

            string[] Numeros = Console.ReadLine().Split(' ');

            MaiorNum = int.Parse(Numeros[0]);
            MenorNum = int.Parse(Numeros[1]);

            if(MaiorNum <= 0 || MenorNum <= 0)
                break;

            if(MaiorNum < MenorNum) {
                int aux = MaiorNum;
                MaiorNum = MenorNum;
                MenorNum = aux;
            }

            for(int i = MenorNum; i <= MaiorNum; i++) {
                Console.Write(i + " ");
                Soma += i;
            }

            Console.WriteLine("Sum="+Soma);
        }
    }
}