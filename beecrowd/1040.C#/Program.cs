using System;
using System.Globalization;

namespace Program {
class URI {
    static void Main() {
        float Nota01, Nota02, Nota03, Nota04, Media;

        string[] Parametros = Console.ReadLine().Split(' ');

        Nota01 = float.Parse(Parametros[0], CultureInfo.InvariantCulture);
        Nota02 = float.Parse(Parametros[1], CultureInfo.InvariantCulture);
        Nota03 = float.Parse(Parametros[2], CultureInfo.InvariantCulture);
        Nota04 = float.Parse(Parametros[3], CultureInfo.InvariantCulture);

        Media = ((Nota01 * 2) + (Nota02 * 3) + (Nota03 * 4) + Nota04) / 10 ;

        Console.WriteLine("Media: " + Media.ToString("F1", CultureInfo.InvariantCulture));

        if(Media >= 7.0)
            Console.WriteLine("Aluno aprovado.");
        else if(Media < 5.0)
            Console.WriteLine("Aluno reprovado.");
        else {
            Console.WriteLine("Aluno em exame.");
            Nota01 = float.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            Console.WriteLine("Nota do exame: " + Nota01.ToString("F1", CultureInfo.InvariantCulture));
            Media = (Nota01 + Media) / 2;s
            if(Media >= 5.0)
                Console.WriteLine("Aluno aprovado.");
            else
                Console.WriteLine("Aluno reprovado.");
            Console.WriteLine("Media final: " + Media.ToString("F1", CultureInfo.InvariantCulture));
        }
    }
}
}
