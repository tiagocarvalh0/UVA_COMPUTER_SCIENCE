using System;

namespace Program {
class URI {
    static void Main() {
        string Nome;
        double SalarioFixo, VlrVendas, SalarioFinal;

        Nome = Console.ReadLine();
        SalarioFixo = double.Parse(Console.ReadLine());
        VlrVendas = double.Parse(Console.ReadLine());

        SalarioFinal = SalarioFixo + (VlrVendas * 0.15);
        Console.WriteLine("TOTAL = R$ " + SalarioFinal.ToString("F2"));
    }
}
}