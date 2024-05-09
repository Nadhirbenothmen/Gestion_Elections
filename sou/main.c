#include <stdio.h>
#include <string.h>
#include"election.h"

int main()
{
   election e1= {7,6,1999,"7","60","50",1};
    election e2= {1,12,1972,"9","100","2",3},e3;
   /* int x=ajouter("ELECTION.txt", e1);
    if(x==1)
        printf("\najout de election avec succés");
    else printf("\nechec ajout");

    modifier("ELECTION.txt","7",e2 );

    if(x==1)
        printf("\nModification de election avec succés");
    else printf("\nechec Modification");
    x=supprimer("ELECTION.txt","9" );
    if(x==1)
        printf("\nSuppression de election avec succés");
    else printf("\nechec Suppression");*/  
    e3=chercher("ELECTION.txt","7");
    if(strcmp(e3.id,"-1")==0)
	{
        printf("\nl'identifiant que vous chercher est introuvable");
	}
    else
	{
	printf("\nl'identifiant que vous chercher est trouvable!!!");
	}
    return 0;
}
