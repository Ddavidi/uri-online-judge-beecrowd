/* 
   ==UserScript==
 @name		    Extremamente Básico
 @namespace   	https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description 	URI 1001 - Extremamente Básico
 @copyright   	@ddavidi_
 @author        @ddavidi_	
   ==/UserScript==
*/

using System;

class URI {
    
  static void Main(string[] args) {
      
    int valueA = Convert.ToInt32(Console.ReadLine());
    int valueB = Convert.ToInt32(Console.ReadLine());
    int valueX = valueA + valueB;
    
    Console.WriteLine("X = " + valueX);
    
  }
}
