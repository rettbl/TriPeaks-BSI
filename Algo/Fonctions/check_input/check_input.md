
```
Algo - check_input 

#include <regex.h> //to get regex fonctionnality 

 fonction check_input {

 	Regex input_user; //we check if the user are not dumb

 	input_user = regcomp();

 	//My regex
 	value = regcomp(&input_user, "[:word:][:number:]", 0); //we want to check if the user put a good card


 	//check the regex input 
 	if (value == 0) {
        
 		//we browse the discard to check if the card are already play now 
 		tabMixedCard;
 		state = 0;
 		head_discard; //to get information from CreateDeckandDiscard 


 		while (tabMixedCard.key != NULL) {

 				head_discard = input_user;

 					if (head_discard = 1) {
 						return good_input;
					}

 					tabMixedCard = tabMixedCard.successeur
 		}

 
    else {
        printf("Compilation error.");
        return wrong_input;
    }
 }

```
