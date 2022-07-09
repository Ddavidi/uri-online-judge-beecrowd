/* 
   ==UserScript==
 @name         O Maior
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1013 - O Maior
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
        
        if(A > B && A > C){
            System.out.println(A + " eh o maior");
        }
        
        else if(B > C){
            System.out.println(B + " eh o maior");
        }
        
        else{
            System.out.println(C + " eh o maior");
        }
        
    }
 
}
