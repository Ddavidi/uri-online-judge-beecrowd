/* 
   ==UserScript==
 @name         Média 2
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1006 - Média 2
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

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
