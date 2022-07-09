/* 
   ==UserScript==
 @name         Múltiplos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1044 - Múltiplos
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
        
        double a = scan.nextDouble();
        double b = scan.nextDouble();
        
        if(a%b==0 || b%a==0){
            System.out.println("Sao Multiplos");
        }
        else{
            System.out.println("Nao sao Multiplos");
        }
    }
}   
