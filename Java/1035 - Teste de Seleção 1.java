/* 
   ==UserScript==
 @name         Teste de Seleção 1
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1035 - Teste de Seleção 1
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        int A = scan.nextInt();
        int B = scan.nextInt();
        int C = scan.nextInt();
        int D = scan.nextInt();
        
        if(B>C && D>A && C+D>A+B && C>0 && D>0 && A%2==0){
            System.out.println("Valores aceitos");
        }
        else{
            System.out.println("Valores nao aceitos");
        }
        
    }
 
}
