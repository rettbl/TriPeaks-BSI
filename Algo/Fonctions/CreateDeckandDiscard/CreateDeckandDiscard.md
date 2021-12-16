```
fonction CreateDeckandDiscard (tabMixedForDeck) {
	Card head_discard;
	head_discard.name = mixedTabForDeck[0]
	head_discard.value = int(name[0]);
	head_discard.position = 99; 
	head_discard.state = 1; // 0 retourner, 1 visible, 2 n'existe plus
	head_discard.next = NULL;
	Card head_deck;
	head_deck.name = mixedTabForDeck[1]
	head_deck.value = int(name[1]);
	head_deck.position = 99; 
	head_deck.state = 2; // 0 retourner, 1 visible, 2 n'existe plus
	head_deck.next = NULL;
	for (i=2;i<24;i++) {
        Card current;
        current.name = mixedTabForDeck[i];
        current.value = int(name[i]);
        current.position = 99; 
        current.state = 2; // 0 retourner, 1 visible, 2 n'existe plus
        current.next = NULL;
        current.next = current;
        current = current.next
	}	
    return head_deck, head_discard
}
```

