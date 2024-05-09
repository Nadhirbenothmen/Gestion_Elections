#include "election.h"
#include <string.h>
int ajouter(char * ELECTION, election e )
{
    FILE * f=fopen(ELECTION, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %d %s %d %s %d\n",e.y.jour,e.y.mois,e.y.annee,e.id,e.nb_habitants,e.nb_conseillers,e.municipalite);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * ELECTION, char id[15], election nouv )
{
    int tr=0;
    election e;
    FILE * f=fopen(ELECTION, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %s %d %s %d\n",&e.y.jour,&e.y.mois,&e.y.annee,e.id,&e.nb_habitants,e.nb_conseillers,&e.municipalite)!=EOF)
        {
            if(strcmp(e.id,id)==0)
            {
                fprintf(f2,"%d %d %d %s %d %s %d\n",nouv.y.jour,nouv.y.mois,nouv.y.annee,nouv.id,nouv.nb_habitants,nouv.nb_conseillers,nouv.municipalite);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %d %s %d %s %d\n",e.y.jour,e.y.mois,e.y.annee,e.id,e.nb_habitants,e.nb_conseillers,e.municipalite);

        }
    }
    fclose(f);
    fclose(f2);
    remove(ELECTION);
    rename("nouv.txt", ELECTION);
    return tr;

}
int supprimer(char * ELECTION, char id[15])
{
    int tr=0;
    election e;
    FILE * f=fopen(ELECTION, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %s %d %s %d\n",&e.y.jour,&e.y.mois,&e.y.annee,e.id,&e.nb_habitants,e.nb_conseillers,&e.municipalite)!=EOF)
        {
            if(strcmp(e.id,id)==0)
                tr=1;
            else
                fprintf(f2,"%d %d %d %s %d %s %d\n",e.y.jour,e.y.mois,e.y.annee,e.id,e.nb_habitants,e.nb_conseillers,e.municipalite);
        }
    }
    fclose(f);
    fclose(f2);
    remove(ELECTION);
    rename("nouv.txt", ELECTION);
    return tr;
}
election chercher(char * ELECTION, char id[15])
{
    election e;
    int tr=0;
    FILE * f=fopen(ELECTION, "r");
    if(f!=NULL)
    {
        while(tr==0 && fscanf(f,"%d %d %d %s %d %s %d\n",&e.y.jour,&e.y.mois,&e.y.annee,e.id,&e.nb_habitants,e.nb_conseillers,&e.municipalite)!=EOF)
        {
            if(strcmp(e.id,id)==0)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        strcpy(e.id,"-1");
    return e;

}
