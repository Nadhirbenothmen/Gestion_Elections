#ifndef ELECTION_H_INCLUDED
#define ELECTION_H_INCLUDED
#include <stdio.h>
#include <string.h>
typedef struct
{
int jour;
int mois;
int annee;
}DateE;
typedef struct
{
DateE y;
char id[50];
int nb_habitants;
char nb_conseillers[50];
int municipalite;
}election;
int ajouter(char * ELECTION, election e);
int modifier(char * ELECTION, char id[15], election nouv);
int supprimer(char * ELECTION, char id[15]);
election chercher(char * ELECTION, char id[15]);
#endif
