Console.WriteLine("---Alumnos---");
Console.WriteLine("Escribe el nombre del alumno: ");
string nombre = Console.ReadLine()!;
Console.WriteLine("Escribe la matricula del alumno: ");
string matricula = Console.ReadLine()!;
Console.WriteLine("Escribe el plantel del alumno: ");
string plantel = Console.ReadLine()!;
Console.WriteLine("Escribe el semestre del alumno: ");
int semestre = Convert.ToInt32(Console.ReadLine()!);

double[] calificaciones = new double[5];
for (int i = 0; i < 5; i++)
{
    Console.WriteLine($"Escribe la calificación con dos decimales {i + 1}: ");
    calificaciones[i] = Convert.ToDouble(Console.ReadLine()!);
}

double suma = 0;
for (int i = 0; i < 5; i++)
{
    suma = suma + calificaciones[i];
}
double promedio = suma / 5;

Console.WriteLine("---Datos del Alumno---");
Console.WriteLine($"Nombre: {nombre}");
Console.WriteLine($"Matrícula: {matricula}");
Console.WriteLine($"Plantel: {plantel}");
Console.WriteLine($"Semestre: {semestre}");
Console.WriteLine($"Promedio: {promedio:F2}");