/* 
   ==UserScript==
 @name         Sequência de Números e Soma
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1101 - Sequência de Números e Soma
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
        
        Scanner scan = new Scanner(System.in);
        
        int N = scan.nextInt();
        int M = scan.nextInt();
        int SUM = 0;
        
        while (true){
            
            if(M>N){
                int aux = M;
                M = N;
                N = aux;
            }
            
            if(N<=0 || M<=0){
                return;
            }
            
            for(M=M; M<=N; M++){
                System.out.print(M + " ");
                SUM += M;
            }
            
            System.out.println("Sum=" + SUM);
            
            N = scan.nextInt();
            M = scan.nextInt();
            SUM = 0;
            
        }
    }
}
