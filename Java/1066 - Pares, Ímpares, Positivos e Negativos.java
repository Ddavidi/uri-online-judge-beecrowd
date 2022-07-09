/* 
   ==UserScript==
 @name         Pares, Ímpares, Positivos e Negativos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description URI 1066 - Pares, Ímpares, Positivos e Negativos
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
        int valoresPares = 0;
        int valoresNegativos = 0;
        int valoresImpares = 0;
 
        for(int i=0; i<5; i++){
            int valores = scan.nextInt();
            
            if(valores>0 && valores!=0){
                valoresPositivos++;
            }
            if (valores<0 && valores!=0){
                valoresNegativos++;
            }
            
            if(valores%2==0){
                valoresPares++;
            }
            else{
                valoresImpares++;
            }
        }
        
        System.out.println(valoresPares + " valor(es) par(es)");
        System.out.println(valoresImpares + " valor(es) impar(es)");
        System.out.println(valoresPositivos + " valor(es) positivo(s)");
        System.out.println(valoresNegativos + " valor(es) negativo(s)");
    }
}
