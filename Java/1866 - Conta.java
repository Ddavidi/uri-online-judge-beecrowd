/* 
   ==UserScript==
 @name         Conta
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1866 - Conta
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
        
        int C = scan.nextInt();
        
        for(int i=0;i<C;i++){
            
            int N;
        
            N = scan.nextInt();
        
            if (N%2==0){
                System.out.println("0");
            }
            else{
                System.out.println("1");
            }
        }
    }
}
