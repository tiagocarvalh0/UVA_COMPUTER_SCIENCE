using System;

namespace Program{
class URI {

    const double PI = 3.14159;
    static void Main() {
        double Raio, Area;
        Raio = double.Parse(Console.ReadLine());
        Area = PI * (Raio * Raio);
        Console.WriteLine("A=" + Area.ToString("F4"));
    }
}
}