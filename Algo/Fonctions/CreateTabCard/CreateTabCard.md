```

fonction CreateTabCard

tabCard [52]


for (i: 0 -> 52)
	
	for (j: 1 -> 4)
		1=carreau
		2=trefle
		3=pique
		4=coeur
	
		for (e: 1 -> 13)
			name= couleur=j + number=e
			tabCard[i]=name


tabMixedCard = random(tabCartes)

return tabMixedCard


```

