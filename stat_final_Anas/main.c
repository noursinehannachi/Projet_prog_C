#include <stdio.h>
#include <stdlib.h>
#include"stat_user.h"

int main()
{
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
