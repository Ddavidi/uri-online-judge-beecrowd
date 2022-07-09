/* 
   ==UserScript==
 @name         Distância Entre Dois Pontos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1015 - Distância Entre Dois Pontos
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/


import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        double x1 = scan.nextDouble();
        double y1 = scan.nextDouble();
        double x2 = scan.nextDouble();
        double y2 = scan.nextDouble();
        
        double distancia = Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2));
        
        System.out.println(String.format("%.4f", distancia));
        
    }
 
}
