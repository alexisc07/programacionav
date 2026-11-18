using System;
using System.Text;

class Program
{
    static long InvertirDigitos(int numero)
    {
        string digitos = Math.Abs((long)numero).ToString();
        string invertido = "";

        for (int i = digitos.Length - 1; i >= 0; i--)
        {
            invertido += digitos[i];
        }

        long resultado = long.Parse(invertido);
        return numero < 0 ? -resultado : resultado;
    }

    static void Main()
    {
        Console.OutputEncoding = Encoding.UTF8;
        Console.WriteLine("=== Inversión de dígitos ===");
        Console.Write("Ingresa un número entero: ");

        int numero;
        while (!int.TryParse(Console.ReadLine(), out numero))
        {
            Console.Write("Valor no válido. Ingresa un número entero: ");
        }

        Console.WriteLine($"El número con sus dígitos invertidos es: {InvertirDigitos(numero)}");
    }
}