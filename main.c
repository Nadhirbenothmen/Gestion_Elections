#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"fonction_nadhir.h"

int main()
{
    gestion_bv G1={"15",3,5,60,50,2},
    gestion_bv G2={"74",20,89,756,2,5};G3
    int x;
    x=ajouter(G1,"BV.txt");
    
    if(x==1)
        printf("\najout de point avec succés");
    else printf("\nechec ajout");
        
    x=modifier(2,G2,"BV.txt" );

    if(x==1)
        printf("\nModification de point avec succés");
    else printf("\nechec Modification");
    x=supprimer(1,"BV.txt" );
    if(x==1)
        printf("\nSuppression de id avec succés");
    else printf("\nechec Suppression");
    G3=chercher(6,"BV.txt" );
    if(G3.id_agent_bv==-1)
        printf("\nintrouvable");
    return 0;
}
