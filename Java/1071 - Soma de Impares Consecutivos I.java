/* 
   ==UserScript==
 @name         Soma de Impares Consecutivos I
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1071 - Soma de Impares Consecutivos I
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
        int Y = scan.nextInt();
        
        int soma = 0;
        
        if(X > Y){
            X--;
            
            while(X>Y){
                if(X%2!=0) soma+=X;
                X--;
            }
        }
        
        if(Y > X){
            Y--;
            while(Y>X){
                if(X%2!=0) soma+=Y;
                Y--;
            }
        }
        
        System.out.println(soma);
    }
}
