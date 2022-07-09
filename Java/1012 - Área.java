/* 
   ==UserScript==
 @name         Área
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1012 - Área
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        double A = scan.nextDouble();
        double B = scan.nextDouble();
        double C = scan.nextDouble();
        
        double triangulo = A*C/2;
        System.out.println(String.format("TRIANGULO: %.3f", triangulo));
        
        double circulo = 3.14159 * Math.pow(C, 2);
        System.out.println(String.format("CIRCULO: %.3f", circulo));
        
        double trapezio = (A+B)*C/2;
        System.out.println(String.format("TRAPEZIO: %.3f", trapezio));
        
        double quadrado = Math.pow(B, 2);
        System.out.println(String.format("QUADRADO: %.3f", quadrado));
        
        double retangulo = A*B;
        System.out.println(String.format("RETANGULO: %.3f", retangulo));
    }
 
}
