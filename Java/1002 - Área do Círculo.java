/* 
   ==UserScript==
 @name         Área do Círculo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1002 - Área do Círculo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Locale;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Locale.setDefault(Locale.US);
        
        Scanner input = new Scanner(System.in);
        
        double area, pi, raio;
        
        pi = 3.14159;
        raio = input.nextDouble();
        area = pi * (raio*raio);
        
        System.out.printf("A=%.4f\n", area);
        
    }
}
