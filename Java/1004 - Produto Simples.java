/* 
   ==UserScript==
 @name         Produto Simples
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1004 - Produto Simples
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/


import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		int b = scan.nextInt();
		
		int x = a * b;
		
		System.out.println("PROD = " + x);
 
    }
 
}
