typedef struct
{
int jours;
int mois;
int anne;
} time;
typedef struct
{
char  lstcandidat;
char nom;
int  identifiant;
int orientation;
int municipalite ;
time dt;
} lstelectoral;

int ajouter(char * filename, listes lst )
int modifier( char * filename, int id, listes nouv )
int supprimer(char * filename, int id);
lstelectoral chercher(char * filename, int id)


