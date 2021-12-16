```
fonction createPeak(mixedTabForPeak[]) {
	Card head_peak;
	head_peak.name = mixedTabForPeak[0]
	head_peak.value = int(name[0]);
	head_peak.position = 1; 
	head_peak.state = 1; // 0 retourner, 1 visible, 2 n'existe plus
	head_peak.next = NULL;
	for (i=2;i<37;i++) {
		if (i != 20 or i != 23 or i != 26 or i != 29 or i != 30 or i != 32 or i != 33 or i != 35 or i != 36) {
			if (i=<10 ) {
				Card current;
				current.name = mixedTabForPeak[i];
				current.value = int(name[i]);
				current.position = i; 
				current.state = 1; // 0 retourner, 1 visible, 2 n'existe plus
				current.next = NULL;
				current.next = current;
				current = current.next
			}
				else {
				Card current;
				current.name = mixedTabForPeak[i];
				current.value = int(name[i]);
				current.position = i; 
				current.state = 0; // 0 retourner, 1 visible, 2 n'existe plus
				current.next = NULL;
				current.next = current;
				current = current.next
			}
		}
	}		
}
```

​	

