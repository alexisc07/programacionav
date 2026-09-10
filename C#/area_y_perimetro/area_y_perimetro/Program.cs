int opc, opc2, lado, d_mayor, d_menor, radio, baseTriangulo, altura; 
Console.WriteLine("---- Area y Perimetro ---");
Console.WriteLine("Ingrese la figura que se utilizará: ");
Console.WriteLine("1. Cuadrado");
Console.WriteLine("2. Rombo");
Console.WriteLine("3. Círculo");
Console.WriteLine("4. Triángulo");
Console.WriteLine("5. Trapecio");
opc=Convert.ToInt32(Console.ReadLine());

switch(opc)
{
    case 1:
        Console.WriteLine("Ingrese la operación a realizar: ");
        Console.WriteLine("1. Área");
        Console.WriteLine("2. Perímetro");
        Console.WriteLine("3. Ambos");   
        opc2=Convert.ToInt32(Console.ReadLine());
        switch(opc2)
        {
            case 1:
                Console.WriteLine("Ingrese el valor del lado: ");
                lado=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El área del cuadrado es: {lado * lado}");
                break;
            case 2:
                Console.WriteLine("Ingrese el valor del lado: ");
                lado=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El perímetro del cuadrado es: {4 * lado}");
                break;
            case 3:
                Console.WriteLine("Ingrese el valor del lado: ");
                lado=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El área del cuadrado es: {lado * lado}");
                Console.WriteLine($"El perímetro del cuadrado es: {4 * lado}");
                break;
            default:
                Console.WriteLine("Opción no válida.");
                break;
        }
    break;

    case 2:
        Console.WriteLine("Ingrese la operación a realizar: ");
        Console.WriteLine("1. Área");
        Console.WriteLine("2. Perímetro");
        Console.WriteLine("3. Ambos");
        opc2=Convert.ToInt32(Console.ReadLine());
        switch(opc2)
        {
            case 1:
                Console.WriteLine("Ingrese el valor de la diagonal mayor: ");
                d_mayor=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Ingrese el valor de la diagonal menor: ");
                d_menor=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El área del rombo es: {d_mayor * d_menor / 2}");
                break;
            case 2:
                Console.WriteLine("Ingrese el valor del lado: ");
                lado=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El perímetro del rombo es: {4 * lado}");
                break;
            case 3:
                Console.WriteLine("Ingrese el valor de la diagonal mayor: ");
                d_mayor=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Ingrese el valor de la diagonal menor: ");
                d_menor=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El área del rombo es: {d_mayor * d_menor / 2}");
                Console.WriteLine("Ingrese el valor del lado: ");
                lado=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El perímetro del rombo es: {4 * lado}");
                break;
            default:
            Console.WriteLine("Opción no válida.");
            break;
        }
    break;

    case 3:
        Console.WriteLine("Ingrese la operación a realizar: ");
        Console.WriteLine("1. Área");
        Console.WriteLine("2. Perímetro");
        Console.WriteLine("3. Ambos");
        opc2=Convert.ToInt32(Console.ReadLine());
        switch(opc2)
        {
            case 1:
                Console.WriteLine("Ingrese el valor del radio: ");
                radio=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El área del círculo es: {Math.PI * Math.Pow(radio, 2)}");
                break;
            case 2:
                Console.WriteLine("Ingrese el valor del radio: ");
                radio=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El perímetro del círculo es: {2 * Math.PI * radio}");
                break;
            case 3:
                Console.WriteLine("Ingrese el valor del radio: ");
                radio=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El área del círculo es: {Math.PI * Math.Pow(radio, 2)}");
                Console.WriteLine($"El perímetro del círculo es: {2 * Math.PI * radio}");
                break;
            default:
            Console.WriteLine("Opción no válida.");
            break;
        }
    break;

    case 4:
        Console.WriteLine("Ingrese la operación a realizar: ");
        Console.WriteLine("1. Área");
        Console.WriteLine("2. Perímetro");
        Console.WriteLine("3. Ambos");
        opc2=Convert.ToInt32(Console.ReadLine());
        switch(opc2)
        {
            case 1:
                Console.WriteLine("Ingrese el valor de la base: ");
                baseTriangulo=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Ingrese el valor de la altura: ");
                altura=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El área del triángulo es: {baseTriangulo    * altura / 2}");
                break;
            case 2:
                Console.WriteLine("Ingrese el valor de los lados: ");
                lado=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El perímetro del triángulo es: {3 * lado}");
                break;
            case 3:
                Console.WriteLine("Ingrese el valor de la base: ");
                baseTriangulo=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Ingrese el valor de la altura: ");
                altura=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El área del triángulo es: {baseTriangulo * altura / 2}");
                Console.WriteLine("Ingrese el valor de los lados: ");
                lado=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El perímetro del triángulo es: {3 * lado}");
                break;
            default:
            Console.WriteLine("Opción no válida.");
            break;
        }
    break;

    case 5:
        Console.WriteLine("Ingrese la operación a realizar: ");
        Console.WriteLine("1. Área");
        Console.WriteLine("2. Perímetro");
        Console.WriteLine("3. Ambos");
        opc2=Convert.ToInt32(Console.ReadLine());
        switch(opc2)
        {
            case 1:
                Console.WriteLine("Ingrese el valor de la base mayor: ");
                d_mayor=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Ingrese el valor de la base menor: ");
                d_menor=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Ingrese el valor de la altura: ");
                altura=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El área del trapecio es: {(d_mayor + d_menor)/ 2 * altura}");
                break;
            case 2:
                Console.WriteLine("Ingrese el valor de la base mayor: ");
                d_mayor=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Ingrese el valor de la base menor: ");
                d_menor=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Ingrese el valor de los lados: ");
                lado=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El perímetro del trapecio es: {(lado*2)+ d_mayor + d_menor}");
                break;
            case 3:
                Console.WriteLine("Ingrese el valor de la base mayor: ");
                d_mayor=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Ingrese el valor de la base menor: ");
                d_menor=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Ingrese el valor de la altura: ");
                altura=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El área del trapecio es: {(d_mayor + d_menor)/ 2 * altura}");
                Console.WriteLine("Ingrese el valor de los lados: ");
                lado=Convert.ToInt32(Console.ReadLine());
                Console.WriteLine($"El perímetro del trapecio es: {(lado*2)+d_mayor+d_menor}");
                break;
            default:
            Console.WriteLine("Opción no válida.");
            break;
        }   
    break;
    
    default:
        Console.WriteLine("Opción no válida.");
    break;
            
}

