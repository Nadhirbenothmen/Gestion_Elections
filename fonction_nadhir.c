#include "fonction_nadhir.h"
#include<stdio.h>
#include <string.h>

 int ajouter(gestion_bv G,char filename [])
{ 
      FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
	fprintf(f,"%d %d %d %d %d %d \n",G.identifiant,G.capacite_electeurs,G.capacite_observateurs,G.municipalite,G.salle,G.id_agent_bv);
        fclose(f);
        return 1;
    }
    else return 0;
}


int modifier(int id, gestion_bv nouv, char * filename)
{
gestion_bv G;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("BV.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while

(fscanf(f,"%d %d %d %d %d %d\n",&G.identifiant,&G.capacite_electeurs,&G.capacite_observateurs,&G.municipalite,&G.salle,&G.id_agent_bv)!=EOF)
{
if(G.identifiant ==identifiant)
     {   fprintf(f2,"%d %d %d %d %d %d\n",nouv.identifiant,nouv.capacite_electeurs,nouv.capacite_observateurs,nouv.municipalite,nouv.salle,nouv.id_agent_bv );
	tr=1;

}
else
{
  fprintf(f2,"%d %d %d %d %d %d\n",&G.identifiant,&G.capacite_electeurs,&G.capacite_observateurs,&G.municipalite,&G.salle,&G.id_agent_bv );
}
}
        fclose(f);
        fclose(f2);
remove(filename);
rename("nouv.txt", filename);
        return 1;
    }
  
}
int supprimer(int id_agent_bv, char * filename)
{
utilisateur u;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("nouv.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %d %d %d %d %d\n",&G.identifiant,&G.capacite_electeurs,&G.capacite_observateurs,&G.municipalite,&G.salle,&G.id_agent_bv )!=EOF)
{
if(G.id_agent_bv != id_agent_bv)
      {   fprintf(f2,"%d %d %d %d %d %d\n",G.identifiant,G.capacite_electeurs,G.capacite_observateurs,G.municipalite,G.salle,G.id_agent_bv );

}
}
        fclose(f);
        fclose(f2);
remove(filename);
rename("nouv.txt", filename);
        return 1;
    }
}

utilisateur chercher(int id_agent_bv, char * filename)
{ gestion_bv G;
 int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %d %d %d %d %d\n",&G.identifiant,&G.capacite_electeurs,&G.capacite_observateurs,&G.municipalite,&G.salle,&G.id_agent_bv  )!=EOF && tr==0)
{if(id_agent_bv==G.id_agent_bv)
tr=1;
}
}
if(tr==0)
G.id_agent_bv=-1;
return G;

}
