using System;
using System.Text;

class Program
{
    static double Celsius(double gradosCelsius)
    {
        return gradosCelsius * 9 / 5 + 32;
    }

    static void Main()
    {
        Console.OutputEncoding = Encoding.UTF8;
        Console.WriteLine("=== Conversión de Celsius a Fahrenheit ===");
        Console.Write("Ingresa la temperatura en grados Celsius: ");

        double celsius;
        while (!double.TryParse(Console.ReadLine(), out celsius))
        {
            Console.Write("Valor no válido. Ingresa un número: ");
        }

        double fahrenheit = Celsius(celsius);
        Console.WriteLine($"{celsius} °C equivalen a {fahrenheit:F2} °F");
    }
}