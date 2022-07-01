// David "Dede" Ribeiro - 2021 - @ddavidi_

using System;

class URI {
    
  static void Main(string[] args) {
      
    const double PI = 3.14159;
    double raio = Convert.ToDouble(Console.ReadLine());
    double area = PI * Math.Pow(raio, 2);
    
    Console.WriteLine("A={0:F4}", area);
  }
}
