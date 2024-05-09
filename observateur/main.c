#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include"fonction_hadil.h"
int main ()
{
observateur o1 ={"1",1,3,4,"organisation",{1,0,0,0}},o3;
observateur o2={"2",1,2,3,"media",{1,1,0,0}};



 /*int x=ajouter( o1,"obsevrateur.txt");
 if(x==1)
        printf("\najout de la reclamation avec succés\n");
    else printf("\nechec ajout\n");*/ 




    /*int x=modifier(o2,"1",1,"obsevrateur.txt");

    if(x==1)
        printf("\nModification du réclamation avec succés\n");
    else printf("\nechec Modification\n"); */




   /*int x=supprimer("2",1,"obsevrateur.txt" );
    if(x==1)
        printf("\nSuppression du réclamation avec succés\n");
    else printf("\nechec Suppression\n"); */





   /* o3=chercher("1",1,"obsevrateur.txt");
    if(((strcmp(o3.Identifiant,"-1")==0))&&(o3.Numero_de_reclamation=-1))
       { printf("\nl'identifiant que vous cherchez introuvable\n");} 
        else {printf("\nl'identifiant que vous chercher est trouvable!!!\n");} */

// statistique 
int x;
x= nbreclamation(1,"observateur.txt");
printf("le nombre de reclamation pour la liste electorale 2 :%d",x);

return 0;}

