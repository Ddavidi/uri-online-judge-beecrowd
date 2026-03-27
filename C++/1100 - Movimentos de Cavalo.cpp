/* 
   ==UserScript==
 @name         Movimentos do Cavalo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1100 - Movimentos do Cavalo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <iostream>
#include <string>
#include <vector>

#define INFINITO 999999999

using namespace std;

struct ARESTA {
    int origem;
    int destino;
    int peso;
};

vector<ARESTA> arestas;

int BellmanFord(int n_nodos, int origem, int destino) {
    vector<int> distancia(n_nodos + 1, INFINITO);
    distancia[origem] = 0;
    
    int trocou = 1;

    for (int i = 0; i <= n_nodos && trocou; i++) {
        trocou = 0;
        
        for (const auto& a : arestas) {
            if (distancia[a.origem] != INFINITO && 
                distancia[a.destino] > distancia[a.origem] + a.peso) {
                
                distancia[a.destino] = distancia[a.origem] + a.peso;
                trocou = 1;
            }
        }
    }
    return distancia[destino];
}

int main() {
    int tabuleiro[9][9];
    int cont = 1;

    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            tabuleiro[i][j] = cont++;
        }
    }

    int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            for (int m = 0; m < 8; m++) {
                int ni = i + dx[m];
                int nj = j + dy[m];

                if (ni >= 1 && ni <= 8 && nj >= 1 && nj <= 8) {
                    arestas.push_back({tabuleiro[i][j], tabuleiro[ni][nj], 1});
                }
            }
        }
    }

    string de, para;
    
    while (cin >> de >> para) {
        int origem = (de[0] - 'a') * 8 + (de[1] - '0');
        int destino = (para[0] - 'a') * 8 + (para[1] - '0');

        cout << "To get from " << de << " to " << para 
             << " takes " << BellmanFord(64, origem, destino) << " knight moves.\n";
    }

    return 0;
}