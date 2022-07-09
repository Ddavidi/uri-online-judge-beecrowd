/* 
   ==UserScript==
 @name         Números Positivos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1060 - Números Positivos
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
 
        for(int i=0; i<6; i++){
            double valores = scan.nextDouble();
            
            if(valores>0){
                valoresPositivos++;
            }
        }
        
        System.out.println(valoresPositivos + " valores positivos");
    }
}
