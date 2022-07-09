/* 
   ==UserScript==
 @name         Conversão de Tempo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1019 - Conversão de Tempo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/


import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        int segundos = scan.nextInt();
        int minutos = 0;
        int horas = 0;
        
        while(segundos>=60){
            minutos += 1;
            segundos -= 60;
        }
        
        while(minutos>=60){
            horas += 1;
            minutos -= 60;
        }
        
        System.out.println(String.format("%d:%d:%d", horas, minutos, segundos));
        
    }
 
}
