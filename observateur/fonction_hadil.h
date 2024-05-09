#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
typedef struct

{

char Identifiant[50];

int Numero_de_reclamation ;

int Numero_de_BV;

int List_electoral;

char Reclamation[200];

int Type_de_reclamation[4];



} observateur ;

typedef struct
{ int jour;
int mois;
int anne ;
}Date;
typedef struct
{
char cin[10];
char nom[30];
char prenom[30];
char Nationalite[30] ; 
char email[50];
int role;
char mot_de_passe [12];
int bureau_vote;
char tel[10];
int sexe;
Date D;

 char vote [20];
} utilisateur;

int ajouter(observateur o , char * filename);

int modifier(observateur nouv,char Identifiant[50],int  Numero_de_reclamation, char * filename);

int supprimer (char Identifiant[50],int Numero_de_reclamation , char * filename);

observateur chercher(char Identifiant[50],int Numero_de_reclamation, char * filename);

int nbreclamation(int List_electoral,char * filename);

void taux (char *filename , float * tn ,float * te);


#endif // FONCTION_H_INCLUDED

