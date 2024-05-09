#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fonction_user.h"
int main ()
{ 
  float x;
float y;
  float T;
// le taux de vote blanc
int h;
    
    h=nombre_de_vote_blanc("user.txt");
    printf("\ntaux du vote blanc est %d",h);

//l'age moyen des elections participants
float g;
    
    g=age_moyen("user.txt");
    printf("\nl'age moyen des elections participants est %f",g);

     /*T=TPE("user.txt");
     printf("\n le taux de participation de electeur est egale a %f ",T);


    TPHF("user.txt",&x,&y);
     printf("\n le taux de participation des femmes est egale %f ",x);
     printf("\n le taux de participation des hommes est egale %f ",y);

utilisateur u1 ={"tunis","1","haifa","slim","user.slim@esprit.tn",1,"1992",1,"13",03,1995,1,5},u3;
utilisateur u2={"tunis","2","hajer","bounjour","haje@gmail.com",2,"2",1,"15",05,1995,2,5};
 int z=ajouter(u1,"user.txt");
 if(z==1)
        printf("\najout de point avec succés");
    else printf("\nechec ajout");
    
   x=modifier("1",u2,"user.txt");

    if(x==1)
        printf("\nModification de point avec succés");
    else printf("\nechec Modification");
 x=ajouter( u1,"user.txt");
 if(x==1)
        printf("\najout de point avec succés");
    else printf("\nechec ajout");

    x=supprimer("2","user.txt" );
    if(x==1)
        printf("\nSuppression de point avec succés");
    else printf("\nechec Suppression");

   u3=chercher("2","haifa","5","user.txt");
    if(strcmp(u3.cin,"-1")==0)
        printf("\nle cin que vous cherchez introuvable\n");
else printf("\n ok!");
x= modif_vote("123" , "user.txt");
 if(x==1)
        printf("\nmodif de vote avec succés");
    else printf("\nechec modif");*/

return 0;}
