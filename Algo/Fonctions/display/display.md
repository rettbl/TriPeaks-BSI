```
fonction display (head_peak, head_deck, head_discard) {
	tab_temp[5][24]
	current = head_peak
	i = 0
	while (current =! NULL) {
		if (current.state == 1) {
			tab_temp[i] = current.value
		}
		else if (current.state == 0) {
			tab_temp[i] = "#"
		}
		else if (current.state == 2) {
			tab_temp[i] = " "
		}
		current = current.nextCard
		i++;
	}
	printf("
    	   %s             %s             %s
    	%s   %s        %s   %s        %s   %s
      %s   %s   %s   %s   %s   %s   %s   %s   %s
    %s    %s    %s    %s    %s    %s    %s    %s    %s    %s", tab_temp[23],tab_temp[22],tab_temp[21],tab_temp[20],tab_temp[19],tab_temp[18],tab_temp[17],tab_temp[16],tab_temp[15],tab_temp[14],tab_temp[13],tab_temp[12],tab_temp[11],tab_temp[10],tab_temp[9],tab_temp[8],tab_temp[7],tab_temp[6],tab_temp[5],tab_temp[4],tab_temp[3],tab_temp[2],tab_temp[1],tab_temp[0])
}


```

