/* 
   ==UserScript==
 @name         Diferença
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1007 - Diferença
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/


import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
		int A = scan.nextInt();
		int B = scan.nextInt();
		int C = scan.nextInt();
		int D = scan.nextInt();
		
		int diferenca = A * B - C * D;
		
		System.out.println("DIFERENCA = " + diferenca);
 
    }
 
}
