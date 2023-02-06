using System;

namespace Program {
class URI {

    const double PI = 3.14159;
    static void Main() {
        double Raio, Volume;

        Raio = double.Parse(Console.ReadLine());

        Volume = (4.0/3) * PI * (Raio * Raio * Raio);

        Console.WriteLine("VOLUME = " + Volume.ToString("F3"));
    }
}
}