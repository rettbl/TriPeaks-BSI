## Partie Algo 

> * Structure en pyramide 
> * 6 éléments
>   * 3 pyramide (pyramide1, pyramide2, pyramide3)
>     * Format en arbre avec un nœud en commun à chaque 
>   * 1 ligne de carte visible (ligneCarte)
>   * 1 pile de carte (pioche)
>     * Pile en **C**
>   * 1 pile de cartes jouées (carteJoue)
> * On peut jouer sans piocher 
> * Jeux de cartes avec 13 valeurs
>   * Dans le jeu, il y a 4 rois, 4 valet, 4 reine, 4 As, 9*4 valeurs de chaque couleurs = 52 cartes
>   * Trèfle
>   * Pic
>   * Cœur
>   * Carreau
> * Pour qu'une carte apparaissent, il faut que la carte du dessus n'ai plus d'enfant pour la cacher (1 ou 2 cartes)
> * On considère toutes les cartes comme invisibles 
>
> <u>**Fonctions :**</u>
>
> 1. Créer les cartes (un for dans un for)
>    1. Un carte = Valeur + couleur 
> 2. Créer les 6 éléments 
>    1. Voir fonction ajoutCarte
>    2. Créer la pile de carte joué (carteJoue)
>       1. Random de la liste des cartes, au début 1 carte peut être joué
>       2. CarteJoue peut être une liste chainée ou une pile
> 3. Alimenter les éléments de cartes
>    1. On ajoute chaque couleur dans une grande liste 

> **Algo écrit :**
>
> 
> ```
> liste_couleur [coeur,carreau,pique,trÃ¨fle]
>liste_carte []
>
>struct Carte (
>	int valeur
>	char couleur
>	Carte parent1
>	Carte parent2
>	Carte Enfant1
>	Carte Enfant2
>)
> 
> Carte maCarte 
> pour couleur dans liste_couleur: 
> entier i = 1 
> tant que i <= 13; i++ alors: 	
> ​	maCarte.valeur = i 	
> ​	maCarte.couleur = couleur liste_carte.add(maCarte) 
> ```
