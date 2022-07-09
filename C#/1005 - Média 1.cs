/* 
   ==UserScript==
 @name         Média 1
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1005 - Média 1
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

using System;

class URI {
    
  static void Main(string[] args) {
      
    double valueA = Convert.ToDouble(Console.ReadLine());
    double valueB = Convert.ToDouble(Console.ReadLine());
    double media = (valueA*3.5 + valueB*7.5)/11;
    
    Console.WriteLine("MEDIA = {0:F5}", media);
    
  }
}
