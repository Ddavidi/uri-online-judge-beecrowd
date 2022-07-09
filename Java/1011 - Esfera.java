/* 
   ==UserScript==
 @name         Esfera
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1011 - Esfera
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        double raio = scan.nextDouble();
        double pi = 3.14159;
        
        double volumeEsfera = (4/3.0) * pi * Math.pow(raio, 3);
        
        System.out.println(String.format("VOLUME = %.3f", volumeEsfera));
        
    }
 
}
