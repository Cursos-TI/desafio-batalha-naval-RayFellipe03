#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.

#define COLUNA 10
#define LINHA 10

int tabuleiro[LINHA][COLUNA] ={
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}};

void NavioHorizontal(int Cima, int Lado){ //funçao para posicionar barco na horizontal
    for (int MudarLinha = 0; MudarLinha < 3; MudarLinha++) //loop que altera valor de agua para barco
    {
        tabuleiro[Cima][Lado]=3;
        Lado = Lado+1; //atribuiçao responsavel pela funcionalidade do loop
    }

}

void NavioVertical(int Cima, int Lado){ //funçao para posicionar barco na horizontal
    for (int MudarLinha = 0; MudarLinha < 3; MudarLinha++) //loop que altera valor de agua para barco
    {
        tabuleiro[Cima][Lado]=3;
        Cima = Cima+1; //atribuiçao responsavel pela funcionalidade do loop
    }

}

void NavioDiagonal(int Cima, int Lado){ //funçao para posicionar barco na horizontal
    for (int MudarLinha = 0; MudarLinha < 3; MudarLinha++) //loop que altera valor de agua para barco
    {
        tabuleiro[Cima][Lado]=3;
        Cima = Cima+1; //atribuiçao responsavel pela funcionalidade do loop
        Lado = Lado+1;
    }

}

int main() {
    // Nível Aventureiro -

    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    return 0;
}
