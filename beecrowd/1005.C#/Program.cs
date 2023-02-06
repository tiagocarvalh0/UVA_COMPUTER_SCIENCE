using System;

namespace Program{
class URI {
    static void Main() {
        double Nota01, Nota02, Media;

        Nota01 = double.Parse(Console.ReadLine());
        Nota02 = double.Parse(Console.ReadLine());
        Media = ((Nota01 * 3.5) + (Nota02 * 7.5)) / 11.0;
        Console.WriteLine("MEDIA = " + Media.ToString("0.00000"));
    }
}
}