/* 
   ==UserScript==
 @name         Soma Simples
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1003 - Soma Simples
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
        
        int A = input.nextInt();
    	int B = input.nextInt();
    	int SOMA = A + B;
    	
    	System.out.println("SOMA = " + SOMA);
    	
    	input.close();
    	
    }
}
