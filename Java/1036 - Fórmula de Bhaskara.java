/* 
   ==UserScript==
 @name         Fórmula de Bhaskara
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1036 - Fórmula de Bhaskara
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
        
        double A = scan.nextDouble();
        double B = scan.nextDouble();
        double C = scan.nextDouble();
        
        double delta = Math.pow(B, 2) - (4*A*C);
        
        if(A==0 || delta<0){
            System.out.println("Impossivel calcular");
            return;
        }
        
        delta = Math.sqrt(delta);
        
        double R1 = (-(B) + delta) / (2*A);
        double R2 = (-(B) - delta) / (2*A);
        
        System.out.println(String.format("R1 = %.5f", R1));
        System.out.println(String.format("R2 = %.5f", R2));
        
    }
 
}
