/* 
   ==UserScript==
 @name         Lanche
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1038 - Lanche
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
        
        int codItem = scan.nextInt();
        int qntItem = scan.nextInt();
        double total;
        
        if(codItem == 1){
            total = 4.00 * qntItem;
            System.out.println(String.format("Total: R$ %.2f", total));
        }
        else if(codItem == 2){
            total = 4.50 * qntItem;
            System.out.println(String.format("Total: R$ %.2f", total));
        }
        else if(codItem == 3){
            total = 5.00 * qntItem;
            System.out.println(String.format("Total: R$ %.2f", total));
        }
        else if(codItem == 4){
            total = 2.00 * qntItem;
            System.out.println(String.format("Total: R$ %.2f", total));
        }
        else{
            total = 1.50 * qntItem;
            System.out.println(String.format("Total: R$ %.2f", total));
        }
    }
}
