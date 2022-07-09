/* 
   ==UserScript==
 @name         Média 2
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1006 - Média 2
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
		double notaA = scan.nextDouble();
		double notaB = scan.nextDouble();
		double notaC = scan.nextDouble();
		
		double media = (notaA * 2 + notaB * 3 + notaC * 5)/10;
		
		System.out.println(String.format("MEDIA = %.1f", media));
 
    }
 
}
