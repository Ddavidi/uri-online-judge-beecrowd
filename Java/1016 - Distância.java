/* 
   ==UserScript==
 @name         Distância
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1016 - Distância
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        int distancia = scan.nextInt();
        
        System.out.println(distancia*2 + " minutos");
        
    }
 
}
