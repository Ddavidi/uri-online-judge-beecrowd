/* 
   ==UserScript==
 @name         Área do Círculo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1002 - Área do Círculo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

using System;

class URI {
    
  static void Main(string[] args) {
      
    const double PI = 3.14159;
    double raio = Convert.ToDouble(Console.ReadLine());
    double area = PI * Math.Pow(raio, 2);
    
    Console.WriteLine("A={0:F4}", area);
  }
}
