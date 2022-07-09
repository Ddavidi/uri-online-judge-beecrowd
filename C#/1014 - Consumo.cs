/* 
   ==UserScript==
 @name         Consumo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1014 - Consumo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

using System; 

class URI {

    static void Main(string[] args) { 

        int X = Convert.ToInt32(Console.ReadLine());
        double Y = Convert.ToDouble(Console.ReadLine());
        
        double consumoMedio = X/Y;
        
        Console.WriteLine("{0:F3} km/l", consumoMedio);
        
    }

}
