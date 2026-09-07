int num_1, num_2, opc;

Console.WriteLine("---- Calculadora Basica ---");
Console.WriteLine("Ingrese el primer número:");
num_1=Convert.ToInt32(Console.ReadLine());
Console.WriteLine("Ingrese el segundo número:");
num_2=Convert.ToInt32(Console.ReadLine());
Console.WriteLine("Ingrese la operación a realizar: ");
Console.WriteLine("1. Suma");
Console.WriteLine("2. Resta");
Console.WriteLine("3. Multiplicación");
Console.WriteLine("4. División");
Console.WriteLine("5. Residuo");
Console.WriteLine("6. Binomio Cuadrado Perfecto");
opc=Convert.ToInt32(Console.ReadLine());

switch(opc)
{
    case 1:
        Console.WriteLine($"El resultado de la suma es: {num_1 + num_2}");
        break;
    case 2:
        Console.WriteLine($"El resultado de la resta es: {num_1 - num_2}");
        break;
    case 3:
        Console.WriteLine($"El resultado de la multiplicación es: {num_1 * num_2}");
        break;
    case 4:
        if(num_2 != 0)
            Console.WriteLine($"El resultado de la división es: {num_1 / num_2}");
        else
            Console.WriteLine("Error: División por cero.");
        break;
    case 5:
        if(num_2 != 0)
            Console.WriteLine($"El residuo de la división es: {num_1 % num_2}");
        else
            Console.WriteLine("Error: División por cero.");
        break;
    case 6:
        Console.WriteLine($"El resultado del binomio cuadrado perfecto es: {(num_1 * num_1) + (2 * num_1 * num_2) + (num_2 * num_2)}");
        break;
    default:
        Console.WriteLine("Opción no válida.");
        break;
}
