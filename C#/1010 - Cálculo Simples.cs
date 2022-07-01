// David "Dede" Ribeiro - 2021 - @ddavidi_

using System;

class URI {
    
  static void Main(string[] args) {
      
    string linha1 = Console.ReadLine();
    string linha2 = Console.ReadLine();
    
    
    string[] valores1 = linha1.Split(' ');
    int codPeca1 = Int32.Parse(valores1[0]);
    int qntPeca1 = Int32.Parse(valores1[1]);
    double precoPeca1 = Convert.ToDouble(valores1[2]);
    
    
    string[] valores2 = linha2.Split(' ');
    int codPeca2 = Int32.Parse(valores2[0]);
    int qntPeca2 = Int32.Parse(valores2[1]);
    double precoPeca2 = Convert.ToDouble(valores2[2]);
    
    double total = qntPeca1*precoPeca1 + qntPeca2*precoPeca2;
    
    Console.WriteLine("VALOR A PAGAR: R$ {0:F2}", total);
  }
}
