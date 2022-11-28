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
int telephone[20];
char adresse[20];
int code_postal[20];
char role[20];
int vote;
}electeur;


// les fonctions stat
void stat_HF( char * filename, float * h,float * f);
float stat_voteBlanc(char *filename);

#endif // FUNCTION_H_INCLUDE


