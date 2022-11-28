#include <stdio.h>
#include <stdlib.h>
#include"stat_user.h"

int main()
{
electeur L1 = {"223JMT4739", "anas26", "Anas", "Rebai", "09639501", 25, 05, 2000, 1, 26018778, "boumhal", 2047, "electeur", 0};
electeur L2 = {"223JMT4030", "abir63", "Abir", "Mousi", "50154436", 27, 07, 1970, 0, 25003987, "hlif", 2050, "candidat", 0};
    float h=0 ,f=0 ,vb=0 ;

// appel fonction stat homme femme
stat_HF("electeur.txt", &h,&f);
printf("Le taux de participation d'homme: %.2f %% \n",h);
printf("Le taux de participation de femme: %.2f %% \n",f);
    

//appel fonction stat vote blanc
vb = stat_voteBlanc("electeur.txt");
printf("Le taux des votes blancs est: %.2f %% \n",vb);


return 0;
}
