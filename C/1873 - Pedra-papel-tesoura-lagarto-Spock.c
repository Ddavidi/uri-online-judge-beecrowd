/* 
   ==UserScript==
 @name         Pedra-papel-tesoura-lagarto-Spock
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1873 - Pedra-papel-tesoura-lagarto-Spock
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    int N, i;
    char Player1[10], Player2[10];

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%s %s", Player1, Player2);

            if(Player1[2] == Player2[2])
                printf("empate\n");

            else if(Player1[2] == 's' && Player2[2] == 'p')
                printf("rajesh\n");

            else if(Player2[2] == 's' && Player1[2] == 'p')
                printf("sheldon\n");

            else if(Player1[2] == 'p' && Player2[2] == 'd')
                printf("rajesh\n");

            else if(Player2[2] == 'p' && Player1[2] == 'd')
                printf("sheldon\n");

            else if(Player1[2] == 'd' && Player2[2] == 'g')
                printf("rajesh\n");

            else if(Player2[2] == 'd' && Player1[2] == 'g')
                printf("sheldon\n");

            else if(Player1[2] == 'g' && Player2[2] == 'o')
                printf("rajesh\n");

            else if(Player2[2] == 'g' && Player1[2] == 'o')
                printf("sheldon\n");

            else if(Player1[2] == 'o' && Player2[2] == 's')
                printf("rajesh\n");

            else if(Player2[2] == 'o' && Player1[2] == 's')
                printf("sheldon\n");

            else if(Player1[2] == 's' && Player2[2] == 'g')
                printf("rajesh\n");

            else if(Player2[2] == 's' && Player1[2] == 'g')
                printf("sheldon\n");

            else if(Player1[2] == 'g' && Player2[2] == 'p')
                printf("rajesh\n");

            else if(Player2[2] == 'g' && Player1[2] == 'p')
                printf("sheldon\n");

            else if(Player1[2] == 'p' && Player2[2] == 'o')
                printf("rajesh\n");

            else if(Player2[2] == 'p' && Player1[2] == 'o')
                printf("sheldon\n");

            else if(Player1[2] == 'o' && Player2[2] == 'd')
                printf("rajesh\n");

            else if(Player2[2] == 'o' && Player1[2] == 'd')
                printf("sheldon\n");

            else if(Player1[2] == 'd' && Player2[2] == 's')
                printf("rajesh\n");

            else if(Player2[2] == 'd' && Player1[2] == 's')
                printf("sheldon\n");
    }
    return 0;
}
