/* 
   ==UserScript==
 @name         Triângulo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1043 - Triângulo
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
        double c = scan.nextDouble();
        
        if(a < b+c && b < a+c && c < a+b){
            double perimetro = a+b+c;
            System.out.println(String.format("Perimetro = %.1f", perimetro));
        }
        else{
            double area = (a+b)*c/2;
            System.out.println(String.format("Area = %.1f", area));
        }
        
    }
}   
