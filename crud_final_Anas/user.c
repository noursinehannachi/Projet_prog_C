#include <stdio.h>
#include <string.h>
#include "user.h"

//fonction ajouter
int ajouter(char * filename, electeur L)
{

    FILE * f=fopen(filename,"a");
    if(f!=NULL)
    {

	fprintf(f,"%s %s %s %s %s %d %d %d %d %s %s %s %s %d\n",L.ID,L.mdp,L.nom,L.prenom,L.cin,L.d.jour,L.d.mois,L.d.annee,L.sexe,L.telephone,L.adresse,L.code_postal,L.role,L.vote);
        fclose(f);
        return 1;
    }
    else
        return 0;
}


//fonction modifier
int modifier( char * filename, char cin, electeur nouv)
{
    int tr=0;
    electeur L;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt","w");
    if(f!=NULL && f2!=NULL)
    {
while(fscanf(f,"%s %s %s %s %s %d %d %d %d %s %s %s %s %d\n",L.ID,L.mdp,L.nom,L.prenom,L.cin,&L.d.jour,&L.d.mois,&L.d.annee,&L.sexe,L.telephone,L.adresse,L.code_postal,L.role,&L.vote) !=EOF)
        {

            if(strcmp( L.cin, cin)==0)
            {
fprintf(f2,"%s %s %s %s %s %d %d %d %d %s %s %s %s %d\n",nouv.ID,nouv.mdp,nouv.nom,nouv.prenom,nouv.cin,nouv.d.jour,nouv.d.mois,nouv.d.annee,nouv.sexe,nouv.telephone,nouv.adresse,nouv.code_postal,nouv.role,nouv.vote);
                tr=1;
            }
            else
                fprintf(f2,"%s %s %s %s %s %d %d %d %d %s %s %s %s %d\n",L.ID,L.mdp,L.nom,L.prenom,L.cin,L.d.jour,L.d.mois,L.d.annee,L.sexe,L.telephone,L.adresse,L.code_postal,L.role,L.vote);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}


//fonction supprimer
int supprimer(char * filename, char cin)
{
    int tr=0;
    electeur L;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s %d %d %d %d %s %s %s %s %d\n",L.ID,L.mdp,L.nom,L.prenom,L.cin,&L.d.jour,&L.d.mois,&L.d.annee,&L.sexe,L.telephone,L.adresse,L.code_postal,L.role,&L.vote)!=EOF)
        {
            if(strcmp( L.cin, cin)==0)
                tr=1;
            else
                fprintf(f2,"%s %s %s %s %s %d %d %d %d %s %s %s %s %d\n",L.ID,L.mdp,L.nom,L.prenom,L.cin,L.d.jour,L.d.mois,L.d.annee,L.sexe,L.telephone,L.adresse,L.code_postal,L.role,L.vote);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}


//fonction chercher
electeur chercher(char * filename, char cin)
{
    electeur L;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while((tr==0) && fscanf(f,"%s %s %s %s %s %d %d %d %d %d %s %d %s %d\n",L.ID,L.mdp,L.nom,L.prenom,L.cin,&L.d.jour,&L.d.mois,&L.d.annee,&L.sexe,&L.telephone,L.adresse,&L.code_postal,L.role,&L.vote)!=EOF)
        {
            if(strcmp( L.cin, cin)==0)
                tr=1;

        }
    }

    fclose(f);
	if (tr==0)
	strcpy(L.cin,"-1");
    return L;
}


