// David "Dede" Ribeiro - 2021 - @ddavidi

using System; 

class URI {

    static void Main(string[] args) { 

        int X = Convert.ToInt32(Console.ReadLine());
        double Y = Convert.ToDouble(Console.ReadLine());
        
        double consumoMedio = X/Y;
        
        Console.WriteLine("{0:F3} km/l", consumoMedio);
        
    }

}
