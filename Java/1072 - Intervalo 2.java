/* 
   ==UserScript==
 @name         Intervalo 2
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1072 - Intervalo 2
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
        int in=0;
        int out=0;
        
        for(int i=0; i<X; i++){
            int valorInteiro = scan.nextInt();
            
            if(valorInteiro>=10 && valorInteiro<=20){
                in++;
            }
            else{
                out++;
            }
        }
        
        System.out.println(in + " in");
        System.out.println(out + " out");
    }
}
