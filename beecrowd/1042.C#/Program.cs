using System;

namespace Program {
class URI {
    static void Main() {
        int[] VetorPri = new int[3];
        int[] VetorAux = new int[3];

        string[] Parametros = Console.ReadLine().Split(' ');

        for(int i = 0; i < 3; i++) {
            VetorPri[i] = int.Parse(Parametros[i]);
            VetorAux[i] = int.Parse(Parametros[i]);
        }

        Array.Sort(VetorAux);

        foreach(int i in VetorAux)
            Console.WriteLine(i);

        Console.Write("\n");

        foreach(int i in VetorPri)
            Console.WriteLine(i);
    }
}
}