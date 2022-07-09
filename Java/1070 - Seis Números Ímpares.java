/* 
   ==UserScript==
 @name         Seis Números Ímpares
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1070 - Seis Números Ímpares
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
        
        Scanner scan = new Scanner(System.in);
        
        int X = scan.nextInt();
        int i = 0;
        
        while(true){
            
            if(X%2!=0){
                System.out.println(X);
                i++;
            }
            
            if(i==6) return;
            X++;
        }
    }
}
