#include <stdio.h>
#include <string.h>
#include"fonction_heni.h"

int main()
{
    liste_electoral le1= {"11428559","tigre","heni",1,1,1,1,2023},le2= {"09801011","lion","mohamed",2,3,29,12,2022},le3;
    int x=ajouter(le1,"liste_electoral.txt");
    /*
    if(x==1)
        printf("\najout de liste avec succes");
    else printf("\nechec ajout");
        */
    x=modifier(1,le2,"liste_electoral.txt");

    if(x==1)
        printf("\nModification de liste avec succes");
    else printf("\nechec Modification");
    x=supprimer(1,"liste_electoral.txt" );
    if(x==1)
        printf("\nSuppression de liste avec succes");
    else printf("\nechec Suppression");
    le3=chercher(3,"liste_electoral.txt" );
    if(le3.identifiant==-1)
        printf("\nintrouvable");
    return 0;
}
