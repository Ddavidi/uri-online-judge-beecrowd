/* 
   ==UserScript==
 @name         Extremamente Básico
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1001 - Extremamente Básico
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.io.IOException;
import java.util.Scanner; 

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		int b = scan.nextInt();
		
		int x = a + b;
		
		System.out.println("X = " + x);
 
    }
 
}
