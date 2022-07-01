// David "Dede" Ribeiro - 2021 - @ddavidi_

using System;

class URI {
    
  static void Main(string[] args) {
      
    double valueA = Convert.ToDouble(Console.ReadLine());
    double valueB = Convert.ToDouble(Console.ReadLine());
    double media = (valueA*3.5 + valueB*7.5)/11;
    
    Console.WriteLine("MEDIA = {0:F5}", media);
    
  }
}
