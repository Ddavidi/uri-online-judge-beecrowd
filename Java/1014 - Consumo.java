/* 
   ==UserScript==
 @name         Consumo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1014 - Consumo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        int distancia = scan.nextInt();
        double conbustivelGasto = scan.nextDouble();
        
        double consumoMedio = distancia/conbustivelGasto;
        
        System.out.println(String.format("%.3f km/l", consumoMedio));
    }
 
}
