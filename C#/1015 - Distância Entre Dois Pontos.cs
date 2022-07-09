/* 
   ==UserScript==
 @name         Distância Entre Dois Pontos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1015 - Distância Entre Dois Pontos
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

using System; 

class URI {

    static void Main(string[] args) { 

        string line1 = Console.ReadLine();
        string line2 = Console.ReadLine();
        
        string[] values1 = line1.Split(' ');
        double x1 = Convert.ToDouble(values1[0]);
        double y1 = Convert.ToDouble(values1[1]);
        
        string[] values2 = line2.Split(' ');
        double x2 = Convert.ToDouble(values2[0]);
        double y2 = Convert.ToDouble(values2[1]);
        
        double distancia = Math.Sqrt(Math.Pow((x2-x1), 2) + Math.Pow((y2-y1), 2));
        
        Console.WriteLine("{0:F4}", distancia);
        
    }

}
