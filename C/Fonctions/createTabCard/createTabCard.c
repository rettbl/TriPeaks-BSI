#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// fonction qui mélange un tableau de chaînes de caractères
void mixTab(char tab[4][52])
{
    int i, j;
    
    // variable temporaire qui contiendra la chaîne 
    char temp[4];

    srand(time(NULL));

    // boucle parcourant le tableau et échangeant des valeurs de manière aléatoire
    for (i = 0; i < 51; ++i)
    {
        // on prend une case aléatoire
        j = rand() % (52 - i) + i;

        // on échange 2 cases
        temp[0] = tab[0][i];
        temp[1] = tab[1][i];
        temp[2] = tab[2][i];
        temp[3] = tab[3][i];
        tab[0][i] = tab[0][j];
        tab[1][i] = tab[1][j];
        tab[2][i] = tab[2][j];
        tab[3][i] = tab[3][j];
        tab[0][j] = temp[0];
        tab[1][j] = temp[1];
        tab[2][j] = temp[2];
        tab[3][j] = temp[3];
    }
}

int main() {

    int j;
    char tabCard[4][52], num[3];

    // boucle créant les 52 cartes
    for (j = 0; j < 52; j++)
    {
        // carreau
        if (j < 13)
        {
            // on met les 2 permiers caractère de la couleur
            tabCard[0][j] = 'c';
            tabCard[1][j] = 'a';

            // on met ensuite le numéro que l'on traduit en caractère 
            sprintf(num, "%d", j + 1);

            // if en fonction de si le numéro a 1 ou 2 chiffres 
            if (j < 9)
            {
                tabCard[2][j] = num[0];
                tabCard[3][j] = ' ';
            }
            else if (j >= 9)
            {
                tabCard[2][j] = num[0];
                tabCard[3][j] = num[1];
            }

        }

        // trefle
        if (j < 26 && j > 12)
        {
            tabCard[0][j] = 't';
            tabCard[1][j] = 'r';
            sprintf(num, "%d", j - 12);

            if (j < 22 && j > 12)
            {
                tabCard[2][j] = num[0];
                tabCard[3][j] = ' ';
            }
            else if (j < 32 && j > 21)
            {
                tabCard[2][j] = num[0];
                tabCard[3][j] = num[1];
            }
        }

        // coeur
        if (j < 39 && j > 25)
        {
            tabCard[0][j] = 'c';
            tabCard[1][j] = 'o';
            sprintf(num, "%d", j - 25);

            if (j < 35 && j > 25)
            {
                tabCard[2][j] = num[0];
                tabCard[3][j] = ' ';
            }
            else if (j < 45 && j > 34)
            {
                tabCard[2][j] = num[0];
                tabCard[3][j] = num[1];
            }
        }

        // pique
        if (j < 52 && j > 38)
        {
            tabCard[0][j] = 'p';
            tabCard[1][j] = 'i';
            sprintf(num, "%d", j - 38);

            if (j < 48 && j > 38)
            {
                tabCard[2][j] = num[0];
                tabCard[3][j] = ' ';
            }
            else if (j < 52 && j > 47)
            {
                tabCard[2][j] = num[0];
                tabCard[3][j] = num[1];
            }
        }
    }

    // mélange du tableau
    mixTab(tabCard);

	return tabCard;
}