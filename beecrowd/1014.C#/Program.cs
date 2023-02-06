using System;

namespace Program {
class URI {
    static void Main() {
        int Distancia;
        double Combustivel, Media;

        Distancia = int.Parse(Console.ReadLine());
        Combustivel = double.Parse(Console.ReadLine());

        Media = Distancia / Combustivel;

        Console.WriteLine(Media.ToString("F3") + " km/l");
    }
}
}