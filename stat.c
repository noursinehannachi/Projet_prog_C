#include<stdio.h>
#include<string.h>
#include "stat_user.h"

// fonction homme femme
 void stat_HF( char * filename, float * ph,float * pf)
{
electeur L ;
float h=0;
int i=0;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    { 
while(fscanf(f,"%s %s %s %s %s %d %d %d %d %s %s %s %s %d\n",L.ID,L.mdp,L.nom,L.prenom,L.cin,&L.d.jour,&L.d.mois,&L.d.annee,&L.sexe,&L.telephone,L.adresse,&L.code_postal,L.role,&L.vote)!=EOF )
{
       i++;
if(L.sexe==1)
      h++;  
}
}
     *ph=(h/i)*100;

     *pf=((i-h)/i)*100;

     fclose(f);
   return;
}


// fonction vote blanc
float stat_voteBlanc(char *filename)
{
electeur L ;
float j=0, pvb=0;
int i=0;
    
     FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s %d %d %d %d %s %s %s %s %d\n",L.ID,L.mdp,L.nom,L.prenom,L.cin,&L.d.jour,&L.d.mois,&L.d.annee,&L.sexe,&L.telephone,L.adresse,&L.code_postal,L.role,&L.vote)!=EOF)
        {
            i++;

           if(L.vote==0)
             j++;

        }
    }

    pvb=(j/i)*100;
    return pvb;

}
