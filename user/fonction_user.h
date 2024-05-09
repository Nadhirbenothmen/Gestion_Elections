typedef struct
{ int jour;
int mois;
int anne ;
}Date;
typedef struct
{int nat;
char cin[10];
char nom[30];
char prenom[30]; 
char email[50];
int role;
char mot_de_passe [12];
int bureau_vote;
char tel[10];
int sexe;
Date D;

 char vote [20];
} utilisateur;

int ajouter(utilisateur u, char user []);
int modifier(char id[], utilisateur u , char * user);
int supprimer(char id[], char * user);
utilisateur chercher(char id[],char nom[],char prenom[] ,char * user);
int modif_vote ( char  idvote[] , char *user);
void TPHF(char * user, float * fe,float * h);
float TPE(char * user);
int nombre_de_vote_blanc(char * user);
float age_moyen(char * user);
