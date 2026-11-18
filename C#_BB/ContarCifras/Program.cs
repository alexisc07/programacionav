using System;
using System.Text;

class Program
{
    static int ContarCifras(long numero)
    {
        int cifras = 0;

        do
        {
            cifras++;
            numero /= 10;
        } while (numero > 0);

        return cifras;
    }

    static void Main()
    {
        Console.OutputEncoding = Encoding.UTF8;
        Console.WriteLine("=== Conteo de cifras ===");
        Console.Write("Ingresa un número entero positivo: ");

        long numero;
        while (!long.TryParse(Console.ReadLine(), out numero) || numero <= 0)
        {
            Console.Write("Valor no válido. Ingresa un entero mayor que 0: ");
        }

        Console.WriteLine($"El número {numero} tiene {ContarCifras(numero)} cifra(s).");
    }
}
