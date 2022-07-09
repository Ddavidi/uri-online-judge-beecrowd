/* 
   ==UserScript==
 @name         Mês
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI  1052 - Mês
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
        
        int numeroMes = scan.nextInt() - 1;
        String mes[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        
        System.out.println(mes[numeroMes]);
    }
}
