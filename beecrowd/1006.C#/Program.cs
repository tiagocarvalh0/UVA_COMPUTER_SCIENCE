using System;

namespace Program {
class URI {
    static void Main() {
        double A, B, C, Media;
        A = double.Parse(Console.ReadLine());
        B = double.Parse(Console.ReadLine());
        C = double.Parse(Console.ReadLine());
        Media = ((A * 2) + (B * 3) + (C * 5)) / 10;
        Console.WriteLine("MEDIA = " + Media.ToString("F1"));
    }
}
}