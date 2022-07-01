// David "Dede" Ribeiro - 2021 - @ddavidi_

using System;

class URI {
    
  static void Main(string[] args) {
      
    double valueA = Convert.ToDouble(Console.ReadLine());
    double valueB = Convert.ToDouble(Console.ReadLine());
    double valueC = Convert.ToDouble(Console.ReadLine());
    
    double media = (valueA*2 + valueB*3 + valueC*5)/10;
    
    Console.WriteLine("MEDIA = {0:F1}", media);
    
  }
}
