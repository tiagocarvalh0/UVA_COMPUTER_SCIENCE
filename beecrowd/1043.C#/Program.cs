using System;
using System.Linq;

namespace Program {
class URI {
    static void Main() {
        double[] VetorLado = new double[3];

        string[] Parametros = Console.ReadLine().Split(' ');

        for(int i = 0; i < 3; i++)
            VetorLado[i] = Convert.ToDouble(Parametros[i]);
        
        Array.Sort(VetorLado);

        if(VetorLado[2] > (VetorLado[0] + VetorLado[1])) {
            double Soma = VetorLado.Sum();
            Console.WriteLine("Perimetro = {0}", Soma.ToString("F1"));
        }

    }
}
}