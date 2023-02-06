using System;
using System.Globalization;

namespace Program {
class URI {
    static void Main(string[] args) {
        double Num;

        Num = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

        if((Num >= 0) && (Num <= 100)) {
            if((Num >= 0) && (Num <= 25.0))
                Console.WriteLine("Intervalo [0,25]");
            else if((Num > 25.0) && (Num <= 50.0))
                Console.WriteLine("Intervalo (25,50]");
            else if((Num > 50.0) && (Num <= 75.0))
                Console.WriteLine("Intervalo (50,75]");
            else    
                Console.WriteLine("Intervalo (75,100]");
        }
        else 
            Console.WriteLine("Fora de intervalo");
    }
}
}