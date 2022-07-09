/* 
   ==UserScript==
 @name         Tempo de Jogo com Minutos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1047 - Tempo de Jogo com Minutos
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
        
        int horaInicial = scan.nextInt();
        int minutoInicial = scan.nextInt();
        int horaFinal = scan.nextInt();
        int minutoFinal = scan.nextInt();
        
        minutoInicial += horaInicial*60;
        minutoFinal += horaFinal*60;
        
        int tempoFinal = minutoFinal - minutoInicial;
        
        if(tempoFinal <= 0){
            tempoFinal += 24*60;
        }
        
        int duracaoHora = tempoFinal/60;
        int duracaoMinuto = tempoFinal%60;
        
        System.out.println(String.format("O JOGO DUROU " + duracaoHora + " HORA(S) E " + duracaoMinuto + " MINUTO(S)"));
    }
}
