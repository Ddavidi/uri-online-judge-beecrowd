/* 
   ==UserScript==
 @name         Números Ímpares
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1067 - Números Ímpares
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
        
        for(int i = 0; i<=X; i++){
            if(i%2!=0){
                System.out.println(i);
            }
        }
    }
}
