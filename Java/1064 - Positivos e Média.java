/* 
   ==UserScript==
 @name         Positivos e Média
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI  1064 - Positivos e Média
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
        
        Scanner scan = new Scanner(System.in);
        int valoresPositivos = 0;
        double media = 0;
 
        for(int i=0; i<6; i++){
            double valores = scan.nextDouble();
            
            if(valores>0){
                valoresPositivos++;
                media += valores;
            }
        }
        
        media = media/valoresPositivos;
        
        System.out.println(valoresPositivos + " valores positivos");
        System.out.println(String.format("%.1f", media));
    }
}
