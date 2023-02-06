using System;

class URI {
    static void Main(){
        int MaiorNum;
        int[] Vetor = new int[3];

        string[] Numeros = Console.ReadLine().Split(' ');

        for(int i = 0; i < 3; i++)
            Vetor[i] = int.Parse(Numeros[i]);

        MaiorNum = Vetor[0];
        
        for(int i = 0; i < 3; i++)
            if(MaiorNum < Vetor[i])
                MaiorNum = Vetor[i];
        
        Console.WriteLine(MaiorNum + " eh o maior");
    }
}
