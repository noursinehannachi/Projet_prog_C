#include <stdio.h>
#include <string.h>
#include "user.h"

int main()
{

electeur L1 = {"223JMT4739", "anas26", "Anas", "Rebai", "09639501", 25, 05, 2000, 1, "26018778", "boumhal", "2047", "electeur", 0};
electeur L2 = {"223JMT4030", "abir63", "Abir", "Mousi", "50154436", 27, 07, 1970, 0, "25003987", "hlif", "2050", "candidat", 0};
electeur L3;
int x;

// appel fonction Ajouter

	x=ajouter("electeur.txt", L1);
	x=ajouter("electeur.txt", L2);
    	if(x==1)
        	printf("\nAjout de Liste avec succees");
    	else
        	printf("\nEchec ajout");


// appel fonction modifier

/*	x=modifier("electeur.txt", 12345678,L2);
   	if(x==1)
        	printf("\nModification avec succes");
    	else
        	printf("\nEchec Modification"); */


// appel fonction supprimer

/*	x=supprimer("electeur.txt", "223JMT4030");
    	if(x==1)
        	printf("\nSuppression avec succes");
    	else
        	printf("\nEchec Suppression"); */


// appel fonction chercher

/*	L3 = chercher("electeur.txt", 12345678);
    	if(L3.CIN == -1)
        	printf("\nIntrouvable");   */

return 0;
}
