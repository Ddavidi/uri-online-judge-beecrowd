/* 
   ==UserScript==
 @name         DDD
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1050 - DDD
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        // Scanner
        Scanner scan = new Scanner(System.in);
        
        double DDD = scan.nextDouble();
        
        if(DDD == 61) System.out.println("Brasilia");
        else if(DDD == 71) System.out.println("Salvador");
        else if(DDD == 11) System.out.println("Sao Paulo");
        else if(DDD == 21) System.out.println("Rio de Janeiro");
        else if(DDD == 32) System.out.println("Juiz de Fora");
        else if(DDD == 19) System.out.println("Campinas");
        else if(DDD == 27) System.out.println("Vitoria");
        else if(DDD == 31) System.out.println("Belo Horizonte");
        else System.out.println("DDD nao cadastrado");
        
    }
}
