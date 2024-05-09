#include "fonction_user.h"
#include<stdio.h>
#include <string.h>

 int ajouter(utilisateur u,char user [])
{ 
    FILE * f=fopen(user, "a");
    if(f!=NULL)
{fprintf(f,"%d %s %s %s %s %s %d %d %d %d %d %s %d %s \n",u.nat,u.cin,u.nom,u.prenom,u.email,u.tel,u.role,u.sexe,u.D.jour,u.D.mois,u.D.anne,u.mot_de_passe,u.bureau_vote ,strcpy(u.vote,"-1"));
 fclose(f);
//printf("test ok \n");
        return 1;
}
else return 0;

}

/*
int modifier(char id[], utilisateur nouv, char * user)
{
utilisateur u;
    FILE * f=fopen(user, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while

(fscanf(f,"%d %s %s %s %s %s %d %d %d %d %d %s %d %s",&u.nat,u.cin,u.nom,u.prenom,u.email,u.tel,&u.role,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.mot_de_passe,&u.bureau_vote ,u.vote)!=EOF)
{
if(strcmp(id,u.cin)==1)
     {   fprintf(f2,"\n %d %s %s %s %s %s %d %d %d %d %d %s %d %s \n",u.nat,u.cin,u.nom,u.prenom,u.email,u.tel,u.role,u.sexe,u.D.jour,u.D.mois,u.D.anne,u.mot_de_passe,u.bureau_vote,u.vote );

}
else
{
  fprintf(f2,"\n %d %s %s %s %s %s %d %d %d %d %d %s %d %s \n",u.nat,nouv.cin,nouv.nom,nouv.prenom,nouv.email,nouv.tel,nouv.role,nouv.sexe,nouv.D.jour,nouv.D.mois,nouv.D.anne,nouv.mot_de_passe,nouv.bureau_vote ,u.vote);
}
}
        fclose(f);
        fclose(f2);
remove(user);
rename("aux.txt", user);
        return 1;
    }
  
}
int supprimer(char id[], char * user)
{
utilisateur u;
    FILE * f=fopen(user, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s %s %s %s %d %s %d %s %d %d %d %d %s",&u.nat,u.cin,u.nom,u.prenom,u.email,&u.role,u.mot_de_passe,&u.bureau_vote ,u.tel,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.vote)!=EOF)
{
if(strcmp(id,u.cin)==1)
      {   fprintf(f2," \n %d %s %s %s %s %d %s %d %s %d %d %d %d %s \n",u.nat,u.cin,u.nom,u.prenom,u.email,u.role,u.mot_de_passe,u.bureau_vote ,u.tel,u.sexe,u.D.jour,u.D.mois,u.D.anne,u.vote);

}
}
        fclose(f);
        fclose(f2);
remove(user);
rename("aux.txt", user);
        return 1;
    }
}


utilisateur chercher(char id[], char nom[], char prenom[],char * user)
{ utilisateur u; int tr=0;
    FILE * f=fopen(user, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %s %s %s %s %s %d %d %d %d %d %s %d %s",&u.nat,u.cin,u.nom,u.prenom,u.email,u.tel,&u.role,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.mot_de_passe,&u.bureau_vote ,u.vote)!=EOF && tr==0)
{if(strcmp(id,u.cin)==0)
tr=1;
}
}
if(tr==0)
strcpy(u.cin,"-1");
return u;

}
int modif_vote(char idvote[] , char * user)
{ utilisateur u; 
    FILE * f=fopen(user, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
{while(fscanf(f,"%d %s %s %s %s %s %d %d %d %d %d %s %d %s",&u.nat,u.cin,u.nom,u.prenom,u.email,u.tel,&u.role,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.mot_de_passe,&u.bureau_vote ,u.vote)!=EOF );
 
fprintf(f2,"\n %d %s %s %s %s %d %d %d %d %d %s %d %s \n",u.cin,u.nom,u.prenom,u.email,u.tel,u.role,u.sexe,u.D.jour,u.D.mois,u.D.anne,u.mot_de_passe,u.bureau_vote,strcpy(u.vote,idvote) );

        fclose(f);
        fclose(f2);
remove(user);
rename("aux.txt", user);
        return 1;
    
}
}
*/
//taux de participation de electeur
float TPE(char * user)
{
utilisateur u;
int nbEvote=0,nbEtotale=0;
float TPE;
FILE * f=fopen(user, "r");
        if(f!=NULL)
        {
while(fscanf(f,"%d %s %s %s %s %d %s %d %s %d %d %d %d %s",&u.nat,u.cin,u.nom,u.prenom,u.email,&u.role,u.mot_de_passe,&u.bureau_vote ,u.tel,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.vote)!=EOF)
        {

nbEtotale=nbEtotale+1;

            if(strcmp(u.vote,"-1")!=0)
                {nbEvote=nbEvote+1;
}

        }


TPE=(float)nbEvote/nbEtotale;

    }
    fclose(f);
   
    return TPE;
}

// taux de participation des hommes et des femmes
void TPHF(char * user, float * fe,float * h)
{
utilisateur u;
int nbEvote=0,nbEvoteH=0,nbEvoteF=0;
FILE * f=fopen(user, "r");
        if(f!=NULL)
        {
while(fscanf(f,"%d %s %s %s %s %d %s %d %s %d %d %d %d %s",&u.nat,u.cin,u.nom,u.prenom,u.email,&u.role,u.mot_de_passe,&u.bureau_vote ,u.tel,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.vote)!=EOF)
 {
            if(strcmp(u.vote,"-1")!=0)
        { nbEvote=nbEvote+1;
switch(u.sexe)
{case 0:{nbEvoteF=nbEvoteF+1;
break;}
case 1:{nbEvoteH=nbEvoteH+1;
break;}
}
}
*fe=(float)nbEvoteF/nbEvote;
*h=(float)nbEvoteH/nbEvote;
    }
    fclose(f);
}
} 
 
//le taux de vote blanc 
int nombre_de_vote_blanc(char * user)
{
    int nbr_vote_blanc=0;
    utilisateur u;
    FILE * f=fopen(user, "r");
    if(f!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %s %d %s %d %s %d %d %d %d %s\n",&u.nat,u.cin,u.nom,u.prenom,u.email,&u.role,u.mot_de_passe,&u.bureau_vote ,u.tel,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.vote)!=EOF)
        {
            if(strcmp(u.vote,"0")==0)
		{
                	nbr_vote_blanc++;
		}
        }
    }
    fclose(f);
    return nbr_vote_blanc;
}
//l'age moyen des elections participants
float age_moyen(char * user )
{   
    utilisateur u ;
    float x,i,s=0;
    float moy;
    x=0; // age
    i=0; // number
FILE * f=fopen(user, "r");
    if(f!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %s %d %s %d %s %d %d %d %d %s\n",&u.nat,u.cin,u.nom,u.prenom,u.email,&u.role,u.mot_de_passe,&u.bureau_vote ,u.tel,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.vote)!=EOF)
        {
            x=2022-u.D.anne;
            s=s+x;
            i++;
        }
        moy=( s/i);
        fclose(f);
    }
       return moy ;

    }

