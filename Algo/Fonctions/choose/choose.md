```
fonction choose(head_peak,head_deck,head_discard) {
	input_player = check_input()
	current = head_peak
	do {
		if (current.value == input && current.state == 1) {
			head_peak, head_discard = remove_card(head_peak,head_discard,current)
			}
		current = current.nextCard
	} while (current.value =! input)
	
	current = head_deck
	do {
		if (current.value == input && current.state == 1) {
			head_deck, head_discard = discard(head_deck, head_discard,current)
			}
		current = current.nextCard
	} while (current.value =! input)
	
	return head_peak, head_deck, head_discard
}
```

