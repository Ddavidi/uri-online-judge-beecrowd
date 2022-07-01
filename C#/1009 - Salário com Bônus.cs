// David "Dede" Ribeiro - 2021 - @ddavidi_

using System;

class URI {
    
  static void Main(string[] args) {
      
    string nomeVendedor = Console.ReadLine();
    double salFixo = Convert.ToDouble(Console.ReadLine());
    double totalVenda = Convert.ToDouble(Console.ReadLine());
    double salario = salFixo + (totalVenda * 0.15);
    
    Console.WriteLine("TOTAL = R$ {0:F2}", salario);
    
  }
}
