// David "Dede" Ribeiro - 2021 - @ddavidi

using System; 

class URI {

    static void Main(string[] args) { 

        const double pi = 3.14159;
        
        double raio = Convert.ToDouble(Console.ReadLine());
        
        double volume = (4.0/3) * pi * Math.Pow(raio, 3);
        
        Console.WriteLine("VOLUME = {0:F3}", volume);

    }

}
