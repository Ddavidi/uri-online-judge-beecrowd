/* 
   ==UserScript==
 @name         Coordenadas de um Ponto
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1041 - Coordenadas de um Ponto
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
        
        double x = scan.nextDouble();
        double y = scan.nextDouble();
        
        if(x>0){
            if(y>0){
                System.out.println("Q1");
            }
            else{
                System.out.println("Q4");
            }
        }
        
        else if(x==0 && y==0){
            System.out.println("Origem");
        }
        
        else if(x==0 && y!=0){
            System.out.println("Eixo Y");
        }
        
        else if(y==0 && x!=0){
            System.out.println("Eixo X");
        }
        
        else{
            if(y>0){
                System.out.println("Q2");
            }
            else{
                System.out.println("Q3");
            }
        }
    }
}   
