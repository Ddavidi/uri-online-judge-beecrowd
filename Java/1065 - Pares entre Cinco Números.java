/* 
   ==UserScript==
 @name         Pares entre Cinco Números
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1065 - Pares entre Cinco Números
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
        
        Scanner scan = new Scanner(System.in);
        int valoresPares = 0;
 
        for(int i=0; i<5; i++){
            int valores = scan.nextInt();
            
            if(valores%2==0){
                valoresPares++;
            }
        }
        
        System.out.println(valoresPares + " valores pares");
    }
}
