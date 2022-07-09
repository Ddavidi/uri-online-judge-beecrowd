/* 
   ==UserScript==
 @name         Quadrado de Pares
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1073 - Quadrado de Pares
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
        
        Scanner scan = new Scanner(System.in);
        
        int N = scan.nextInt();
        
        for(int i=1; i<=N; i++){
            if(i%2==0){
                double raizQuadrada = Math.pow(i, 2);
                System.out.println(String.format("%d^2 = %.0f", i, raizQuadrada));
            }
        }
    }
}
