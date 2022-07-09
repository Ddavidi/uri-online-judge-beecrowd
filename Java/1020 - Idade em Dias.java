/* 
   ==UserScript==
 @name         Idade em Dias
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1020 - Idade em Dias
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        int dias = scan.nextInt();
        
        int anos = dias / 365;;
        int meses = (dias % 365) / 30;
        dias = (dias % 365) % 30;
        
        System.out.println(anos + " ano(s)\n" + meses + " mes(es)\n" + dias + " dia(s)");
        
    }
 
}
