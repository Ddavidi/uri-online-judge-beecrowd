/* 
   ==UserScript==
 @name         Diferença
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1007 - Diferença
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

using System;

class URI {
    
  static void Main(string[] args) {
      
    int valueA = Convert.ToInt32(Console.ReadLine());
    int valueB = Convert.ToInt32(Console.ReadLine());
    int valueC = Convert.ToInt32(Console.ReadLine());
    int valueD = Convert.ToInt32(Console.ReadLine());
    
    int diferenca = valueA*valueB - valueC*valueD;
    
    Console.WriteLine("DIFERENCA = " + diferenca);
    
  }
}
