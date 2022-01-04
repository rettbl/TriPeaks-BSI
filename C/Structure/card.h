#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Card c;

// d�finition de la structure des cartes
struct Card {
	char name[4];
	int posi; // position dans le jeu 
	int value;
	int state; // �tat : retourn� ou visible dans le jeu
	c* nextCard; // pointeur vers la carte suivante dans le cas du deck ou de la d�fausse (cartes jou�es)
};
