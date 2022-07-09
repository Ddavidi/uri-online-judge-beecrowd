/* 
   ==UserScript==
 @name         Animal
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1049 - Animal
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>
 
int main() {
 
    char animal_1[12], animal_2[12], animal_3[12];
    
    scanf("%s%s%s", &animal_1, &animal_2, &animal_3);
    
    if(animal_1[0] == 'v' && animal_2[0] == 'a' && animal_3[0] == 'c'){
        printf("aguia\n");
    }
    
    if(animal_1[0] == 'v' && animal_2[0] == 'a' && animal_3[0] == 'o'){
        printf("pomba\n");
    }
    
    
    if(animal_1[0] == 'v' && animal_2[0] == 'm' && animal_3[0] == 'o'){
        printf("homem\n");
    }
    
    if(animal_1[0] == 'v' && animal_2[0] == 'm' && animal_3[0] == 'h'){
        printf("vaca\n");
    }
    
    
    
    
    if(animal_1[0] == 'i' && animal_2[0] == 'i' && animal_3[2] == 'm'){
        printf("pulga\n");
    }
    
    if(animal_1[0] == 'i' && animal_2[0] == 'i' && animal_3[2] == 'r'){
        printf("lagarta\n");
    }
    
    
    if(animal_1[0] == 'i' && animal_2[0] == 'a' && animal_3[0] == 'h'){
        printf("sanguessuga\n");
    }
    
    if(animal_1[0] == 'i' && animal_2[0] == 'a' && animal_3[0] == 'o'){
        printf("minhoca\n");
    }
 
    return 0;
}
