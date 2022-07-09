/* 
   ==UserScript==
 @name         Esfera
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1011 - Esfera
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

using System; 

class URI {

    static void Main(string[] args) { 

        const double pi = 3.14159;
        
        double raio = Convert.ToDouble(Console.ReadLine());
        
        double volume = (4.0/3) * pi * Math.Pow(raio, 3);
        
        Console.WriteLine("VOLUME = {0:F3}", volume);

    }

}
