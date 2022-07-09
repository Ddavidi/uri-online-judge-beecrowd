/* 
   ==UserScript==
 @name         Animal
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI  1049 - Animal
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
        
        String palavra1 = scan.next();
        String palavra2 = scan.next();
        String palavra3 = scan.next();
        
        if(palavra1.equalsIgnoreCase("vertebrado")){
            if(palavra2.equalsIgnoreCase("ave")){
                if(palavra3.equalsIgnoreCase("carnivoro")){
                    System.out.println("aguia");
                }
                else{
                    System.out.println("pomba");
                }
            }
            else{
                if(palavra3.equalsIgnoreCase("onivoro")){
                    System.out.println("homem");
                }
                else{
                    System.out.println("vaca");
                }
            }
        }
        
        else{
            if(palavra2.equalsIgnoreCase("inseto")){
                if(palavra3.equalsIgnoreCase("hematofago")){
                    System.out.println("pulga");
                }
                else{
                    System.out.println("lagarta");
                }
            }
            else{
                if(palavra3.equalsIgnoreCase("hematofago")){
                    System.out.println("sanguessuga");
                }
                else{
                    System.out.println("minhoca");
                }
            }
        }
    }
}
