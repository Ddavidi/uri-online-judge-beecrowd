/* 
   ==UserScript==
 @name         Intervalo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1037 - Intervalo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        // Scanner
        Scanner scan = new Scanner(System.in);
        
        double valor = scan.nextDouble();
        
        if(valor>=0 && valor<=25){
            System.out.println("Intervalo [0,25]");
        }
        else if(valor>25 && valor<=50){
            System.out.println("Intervalo (25,50]");
        }
        
        else if(valor>50 && valor<=75){
            System.out.println("Intervalo (50,75]");
        }
        else if(valor>75 && valor<=100){
            System.out.println("Intervalo (75,100]");
        }
        else{
            System.out.println("Fora de intervalo");
        }
        
    }
 
}
