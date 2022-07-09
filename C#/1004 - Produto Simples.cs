/* 
   ==UserScript==
 @name         Produto Simples
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1004 - Produto Simples
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

using System;

class URI {
    
  static void Main(string[] args) {
      
    int valueA = Convert.ToInt32(Console.ReadLine());
    int valueB = Convert.ToInt32(Console.ReadLine());
    int SOMA = valueA * valueB;
    
    Console.WriteLine("PROD = " + SOMA);
  }
}
