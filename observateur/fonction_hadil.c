#include "fonction_hadil.h"
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int ajouter( observateur o, char * filename)
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %d %d %d %s %d %d %d %d\n",o.Identifiant,o.Numero_de_reclamation,o.Numero_de_BV,o.List_electoral,o.Reclamation,o.Type_de_reclamation[0],o.Type_de_reclamation[1],o.Type_de_reclamation[2],o.Type_de_reclamation[3]);
        fclose(f);
        return 1;
    }
    else
    { return 0;
    }

}


int modifier(observateur nouv,char Identifiant[50],int  Numero_de_reclamation, char * filename)
{
    int tr=0;
    observateur o;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %d %d %d %s %d %d %d %d\n",o.Identifiant,&o.Numero_de_reclamation,&o.Numero_de_BV,&o.List_electoral,o.Reclamation,&o.Type_de_reclamation[0],&o.Type_de_reclamation[1],&o.Type_de_reclamation[2],&o.Type_de_reclamation[3])!=EOF)
        {
            if((strcmp(o.Identifiant,Identifiant)==0)&&(o.Numero_de_reclamation==Numero_de_reclamation))
            {
                fprintf(f2,"%s %d %d %d %s %d %d %d %d\n",nouv.Identifiant,nouv.Numero_de_reclamation,nouv.Numero_de_BV,nouv.List_electoral,nouv.Reclamation,nouv.Type_de_reclamation[0],nouv.Type_de_reclamation[1],nouv.Type_de_reclamation[2],nouv.Type_de_reclamation[3]);
                tr=1;
            }
            else 
             {
                fprintf(f2,"%s %d %d %d %s %d %d %d %d\n",o.Identifiant,o.Numero_de_reclamation,o.Numero_de_BV,o.List_electoral,o.Reclamation,o.Type_de_reclamation[0],o.Type_de_reclamation[1],o.Type_de_reclamation[2],o.Type_de_reclamation[3]);
               }
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer (char Identifiant[50],int Numero_de_reclamation , char * filename)
{
    int tr=0;
    observateur o;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %d %d %d %s %d %d %d %d\n",o.Identifiant,&o.Numero_de_reclamation,&o.Numero_de_BV,&o.List_electoral,o.Reclamation,&o.Type_de_reclamation[0],&o.Type_de_reclamation[1],&o.Type_de_reclamation[2],&o.Type_de_reclamation[3])!=EOF)
        {
            if((strcmp(o.Identifiant,Identifiant)==0) &&(o.Numero_de_reclamation==Numero_de_reclamation))
              {  tr=1;}
            else
              {  fprintf(f2,"%s %d %d %d %s %d %d %d %d\n",o.Identifiant,o.Numero_de_reclamation,o.Numero_de_BV,o.List_electoral,o.Reclamation,o.Type_de_reclamation[0],o.Type_de_reclamation[1],o.Type_de_reclamation[2],o.Type_de_reclamation[3]);}
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
observateur chercher(char Identifiant[50],int Numero_de_reclamation, char * filename)
{
    observateur o;
    int tr=0;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%s %d %d %d %s %d %d %d %d\n",o.Identifiant,&o.Numero_de_reclamation,&o.Numero_de_BV,&o.List_electoral,o.Reclamation,&o.Type_de_reclamation[0],&o.Type_de_reclamation[1],&o.Type_de_reclamation[2],&o.Type_de_reclamation[3])!=EOF)
        {
            if((strcmp(o.Identifiant,Identifiant)==0)&&(o.Numero_de_reclamation==Numero_de_reclamation))
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        strcpy(o.Identifiant,"-1");
    o.Numero_de_reclamation=-1;
   return o;
}

// fonction statistique 
int nbreclamation(int List_electoral,char * filename)

{
    
    int nb=0;
    observateur o;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while( fscanf(f,"%s %d %d %d %s %d %d %d %d\n",o.Identifiant,&o.Numero_de_reclamation,&o.Numero_de_BV,&o.List_electoral,o.Reclamation,&o.Type_de_reclamation[0],&o.Type_de_reclamation[1],&o.Type_de_reclamation[2],&o.Type_de_reclamation[3])!=EOF)
        { if (o.List_electoral==List_electoral)
             {
                    nb++;
            }

        }

     }
return nb;
}

void taux (char *filename , float * tn ,float * te)
{
utilisateur u;
    FILE * f=fopen(filename, "r");
    int nb_total=0;
    int nb_tunisien=0;
    int nb_etrang=0;
   
if(f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s  %s %s %d %d %d %d %d %s %d %s",u.cin,u.nom,u.prenom,u.Nationalite,u.email,u.tel,&u.role,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.mot_de_passe,&u.bureau_vote ,u.vote)!=EOF)
        {		
		nb_total++ ; 
		
            if(strcmp(u.Nationalite,"tunisienne")==0)     
                {
                   nb_tunisien++  ;
                }	
	        

                 nb_etrang=nb_total-nb_tunisien;
                 *tn=(nb_tunisien/nb_total)*100;
                 *te=(nb_etrang/nb_total)*100;	
                 
    }
    fclose(f);	
}
}


    
    
    

