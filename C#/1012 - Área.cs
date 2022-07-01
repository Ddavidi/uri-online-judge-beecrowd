// David "Dede" Ribeiro - 2021 - @ddavidi

using System; 

class URI {

    static void Main(string[] args) { 

        string line1 = Console.ReadLine();
        
        string[] values1 = line1.Split(' ');
        double A = Convert.ToDouble(values1[0]);
        double B = Convert.ToDouble(values1[1]);
        double C = Convert.ToDouble(values1[2]);
        
        double triangulo = A*C/2;
        double circulo = 3.14159 * Math.Pow(C, 2);
        double trapezio = (A+B)*C/2;
        double quadrado = Math.Pow(B, 2);
        double retangulo = A*B;
        
        Console.WriteLine("TRIANGULO: {0:F3}", triangulo);
        Console.WriteLine("CIRCULO: {0:F3}", circulo);
        Console.WriteLine("TRAPEZIO: {0:F3}", trapezio);
        Console.WriteLine("QUADRADO: {0:F3}", quadrado);
        Console.WriteLine("RETANGULO: {0:F3}", retangulo);
    }

}
