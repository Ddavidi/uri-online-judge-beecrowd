/* 
   ==UserScript==
 @name         Distância
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1017 - Gasto de Combustível
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        int tempo = scan.nextInt();
        int velocidadeMedia = scan.nextInt();
        double distancia = velocidadeMedia * tempo;
        
        double litrosNecessarios = distancia/12;
        
        System.out.println(String.format("%.3f", litrosNecessarios));
        
    }
 
}
