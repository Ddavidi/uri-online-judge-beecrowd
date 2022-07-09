/* 
   ==UserScript==
 @name         Cálculo Simples
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1010 - Cálculo Simples
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        int codigoPeca1 = scan.nextInt();
        int numeroPeca1 = scan.nextInt();
        double valorPeca1 = scan.nextDouble();
        
        int codigoPeca2 = scan.nextInt();
        int numeroPeca2 = scan.nextInt();
        double valorPeca2 = scan.nextDouble();
        
        double total = numeroPeca1 * valorPeca1 + numeroPeca2 * valorPeca2;
        
        System.out.println(String.format("VALOR A PAGAR: R$ %.2f", total));
 
    }
 
}
