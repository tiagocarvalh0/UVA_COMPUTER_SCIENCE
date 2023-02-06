using System;

namespace Program {
class URI {
    static void Main() {
        int Numero, Horas;
        double VlrHora, Salario;
        Numero = int.Parse(Console.ReadLine());
        Horas = int.Parse(Console.ReadLine());
        VlrHora = double.Parse(Console.ReadLine());
        Salario = Horas * VlrHora;
        Console.WriteLine("NUMBER = " + Numero);
        Console.WriteLine("SALARY = U$ " + Salario.ToString("F2"));
    }
}
}