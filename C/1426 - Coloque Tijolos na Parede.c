/* 
   ==UserScript==
 @name         Coloque Tijolos na Parede
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1426 - Coloque Tijolos na Parede
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

int main()
{
    int m[9][9],i,posicao1=0,posicao2=0, y=0, z=0, z1=0, a=0,b=0, a1=1;
    scanf("%d",&i);

    for(i;i>0;i--){
        for(y=0;y<9;y+=2){
            z1++;
            for(z=0;z<z1*2;z+=2){
                scanf("%d",&m[y][z]);
       		}
    	}
    	z1=0;
        for(y=0;y<10;y++){

            m[posicao1+2][posicao2+1]=(m[posicao1][posicao2]-(m[posicao1+2][posicao2]+m[posicao1+2][posicao2+2]))/2;
            m[posicao1+1][posicao2]=m[posicao1+2][posicao2+1]+m[posicao1+2][posicao2];
            m[posicao1+1][posicao2+1]=m[posicao1+2][posicao2+2]+m[posicao1+2][posicao2+1];

            if(posicao1==posicao2){
                posicao1+=2;
                posicao2=0;
            }
            else{
                posicao2+=2;
            }
        }
        posicao1=0;
        posicao2=0;
        for(a=0;a<9;a++){
        for(b=0; b<a1;b++){
		if(b==a1-1){
			printf("%d", m[a][b]);
		}
		else{
			printf("%d ", m[a][b]);
	}

        }
        a1++;
        printf("\n");
        }
        a1=1;
    }

    return 0;
}
