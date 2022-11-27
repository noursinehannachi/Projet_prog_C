#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

typedef struct{
int jour;
int mois;
int annee;
} date;
//struct liste
typedef struct{
int CIN;
int Ntelephone;
char nom;
char prenom;
date d;
int sexe;
int code_postal;
char role;
int vote;
 
}electeur;



//les fonctions CRUD
/*int ajouter(char * filename, electeur L);
int modifier( char * filename,int CIN,electeur nouv );
int supprimer(char * filename, int CIN);
electeur chercher(char * filename, int CIN);*/


// les fonctions stat
void stat_HF( char * filename, float * h,float * f);
float stat_voteBlanc(char *filename);

#endif // FUNCTION_H_INCLUDE


