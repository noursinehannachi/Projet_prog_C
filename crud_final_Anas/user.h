#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

typedef struct{
int jour;
int mois;
int annee;
} date;
//struct liste
typedef struct{
char ID[20];
char mdp[20];
char nom[20];
char prenom[20];
char cin[20];
date d;
int sexe;
char telephone[20];
char adresse[20];
char code_postal[20];
char role[20];
int vote;
}electeur;

//les fonctions
int ajouter(char * filename, electeur);
int modifier( char * filename, char cin, electeur);
int supprimer(char * filename, char cin);
electeur chercher(char * filename, char cin);

#endif // FUNCTION_H_INCLUDE


