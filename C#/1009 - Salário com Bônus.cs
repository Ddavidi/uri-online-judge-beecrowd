/* 
   ==UserScript==
 @name         Salário com Bônus
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1009 - Salário com Bônus
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

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
