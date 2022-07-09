/* 
   ==UserScript==
 @name         Tempo de Jogo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1046 - Tempo de Jogo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;
import java.util.stream.*;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        // Scanner
        Scanner scan = new Scanner(System.in);
        
        int a = scan.nextInt();
        int b = scan.nextInt();
        
        if(a>b){
            int duracaoJogo = (24 - a) + b;
            System.out.println("O JOGO DUROU " + duracaoJogo + " HORA(S)");
        }
        else if(b>a){
            int duracaoJogo = b-a;
            System.out.println("O JOGO DUROU " + duracaoJogo + " HORA(S)");
        }
        else{
            System.out.println("O JOGO DUROU 24 HORA(S)");
        }
    }
}   
