// David "Dede" Ribeiro - 2021 - @ddavidi_

using System;

class URI {
    
  static void Main(string[] args) {
      
    int numFuncionario = Convert.ToInt32(Console.ReadLine());
    int horaTrabalhada = Convert.ToInt32(Console.ReadLine());
    double salPorHora = Convert.ToDouble(Console.ReadLine());
    double salario = horaTrabalhada * salPorHora;
    
    Console.WriteLine("NUMBER = " + numFuncionario);
    Console.WriteLine("SALARY = U$ {0:F2}", salario);
    
  }
}
