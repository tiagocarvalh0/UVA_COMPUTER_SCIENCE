using System;

namespace Program {
class URI {
    static void Main() {
        string CodProd01, CodProd02;
        int QntProd01, QntProd02;
        double VlrProd01, VlrProd02, VlrTolal;

        string[] Parametros = Console.ReadLine().Split(' ');

        CodProd01 = Parametros[0];
        QntProd01 = int.Parse(Parametros[1]);
        VlrProd01 = double.Parse(Parametros[2]);

        Parametros = Console.ReadLine().Split(' ');

        CodProd02 = Parametros[0];
        QntProd02 = int.Parse(Parametros[1]);
        VlrProd02 = double.Parse(Parametros[2]);

        VlrTolal = (QntProd01 * VlrProd01) + (QntProd02 * VlrProd02);

        Console.WriteLine("VALOR A PAGAR: R$ " + VlrTolal.ToString("F2"));
    }
}
}