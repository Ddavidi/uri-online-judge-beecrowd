/* 
   ==UserScript==
 @name         Notas e Moedas
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1021 - Notas e Moedas
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        double N = scan.nextDouble();
        
        int notas = (int) N;
        int moedas = (int) ((N-notas) * 100);
        
        System.out.println("NOTAS:");
        
        int valor = notas/100;
        notas -= valor*100;
        System.out.println(valor + " nota(s) de R$ 100.00");
        
        valor = notas/50;
        notas -= valor*50;
        System.out.println(valor + " nota(s) de R$ 50.00");
        
        valor = notas/20;
        notas -= valor*20;
        System.out.println(valor + " nota(s) de R$ 20.00");
        
        valor = notas/10;
        notas -= valor*10;
        System.out.println(valor + " nota(s) de R$ 10.00");
        
        valor = notas/5;
        notas -= valor*5;
        System.out.println(valor + " nota(s) de R$ 5.00");
        
        valor = notas/2;
        notas -= valor*2;
        System.out.println(valor + " nota(s) de R$ 2.00");
    
        System.out.println("MOEDAS:");
        
        valor = notas%2;
        notas -= valor;
        System.out.println(valor + " moeda(s) de R$ 1.00");
        
        valor = moedas/50;
        moedas -= valor*50;
        System.out.println(valor + " moeda(s) de R$ 0.50");
        
        valor = moedas/25;
        moedas -= valor*25;
        System.out.println(valor + " moeda(s) de R$ 0.25");
        
        valor = moedas/10;
        moedas -= valor*10;
        System.out.println(valor + " moeda(s) de R$ 0.10");
        
        valor = moedas/5;
        moedas -= valor*5;
        System.out.println(valor + " moeda(s) de R$ 0.05");
        
        valor = moedas%5;
        moedas -= valor;
        System.out.println(valor + " moeda(s) de R$ 0.01");
        
    }
 
}
