# Listes des fonctions

## Initialisation du jeu

CreateTabCard() ==> créer la liste de cartes mélangées
return mixedTabCard [ ]

CreatePeak(mixedTabForPeak [ ] ) ==> créer les pyramides et stocke les 3 cartes du haut
return head_peak, topPeakL, topPeakM, topPeakR

CreateDeckandDiscard(mixedTabForDeck [ ] ) ==> créer la pioche et la défausse
return head_deck, head_discard



## Partie en cours

display(head_peak,head_discard) ==> faire l'affichage

check_input(head_peak) ==> check orthographe, si "piocher" return piocher sinon parcours la pyramide et check si state 1, name = input et value +- 1
return good_input

choose(head_peak,head_deck,head_discard) ==> fait le choix de la carte et retire la carte de la liste
return mod_head_peak, mod_head_deck, mod_head_discard

remove_card(head_peak,head_discard,cardToMove) ==> met l'état de la carte à 2 et la copie dans head_discard
return mod_head_peak, mod_head_discard

discard(head_deck, head_discard,cardToMove) ==> retire la carte du deck et la copie dans head_discard
return mod_head_deck, mod_head_discard

check_win(topPeakL, topPeakM, topPeakR)
return 1 ou 0

check_lose(head_deck)
return 2 ou 0