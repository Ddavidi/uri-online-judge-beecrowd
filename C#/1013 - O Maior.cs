/* 
   ==UserScript==
 @name         O Maior
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1013 - O Maior
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

using System; 

class URI {

    static void Main(string[] args) { 

        string line1 = Console.ReadLine();
        
        string[] values1 = line1.Split(' ');
        double A = Int32.Parse(values1[0]);
        double B = Int32.Parse(values1[1]);
        double C = Int32.Parse(values1[2]);
        
        double maiorAB = (A+B+Math.Abs(A-B))/2;
        
        if(maiorAB>C){
            Console.WriteLine(maiorAB + " eh o maior");
        }
        else{
            Console.WriteLine(C + " eh o maior");
        }
    }

}
