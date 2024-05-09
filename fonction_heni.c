#include"fonction_heni.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ajouter(lstelectoral le,char *filename[])
{
FILE * f= fopen(filename,"a");
if (f!=NULL)
{
fprintf(f,"%d %d %d %s %s\n",le.identifiant,le.orientation,le.municipalite,le.candidat,le.nom);
fcolse(f);
return 1;
}
else return 0;
}
int modifier(int identifiant,lstelectoral nouv,char *filename);
{
lstelectoral le;

    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("nouv.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while

(fscanf(f,"%d %s %s %d %d  %d %d %d  ",&le.identifiant,le.nom,le.lstcandidat,le.orientation,le.municipalite,&le.dt.jour,&le.dt.mois,&le.dt.anne )!=EOF)
{
if(le.identifiant!=identifiant)
     {   fprintf(f2,"%d %s %s %d %d  %d %d %d ",le.identifiant,le.nom,le.lstcandidat,le.orientation,le.municipalite,le.dt.jour,le.dt.mois,le.dt.anne );

}
else
{
  fprintf(f2,"%d %s %s %d %d %d %d  \n",nouv.identifiant,nouv.nom,nouv.lstcandidat,nouv.orientation,nouv.municipalite,nouv.dt.jour,nouv.dt.mois,nouv.dt.anne );
}
}
        fclose(f);
        fclose(f2);
remove(filename);
rename("nouv.txt", filename);
        return 1;
    }
  
}
int supprimer(int identifiant, char * filename)
{
lstelectoral le;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("nouv.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s %s %d %d  %d %d %d ",&le.identifiant,le.nom,le.lstcandidat,le.orientation,le.municipalite,le.dt.jour,le.dt.mois,le.dt.anne )!=EOF)
{
if(le.identifiant!=identifiant)
      {   fprintf(f2,"%d %s %s %d %d  %d %d %d" le.identifiant,le.nom,le.lstcandidat,le.orientation,le.municipalite,le.dt.jour,le.dt.mois,le.dt.anne);

}
}
        fclose(f);
        fclose(f2);
remove(filename);
rename("nouv.txt", filename);
        return 1;
    }
}

lstelectoral chercher(int identifiant, char * filename)
{ lstelectoral le; int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %s %s %d %d  %d %d %d",&le.identifiant,le.nom,le.lstcandidat,le.orientation,le.municipalite,&le.dt.jour,&le.dt.mois,&le.dt.anneee )!=EOF && tr==0)
{if(identifiant==le.identifiant)
tr=1;
}
}
if(tr==0)
le.identifiant=-1;
return le;

}
