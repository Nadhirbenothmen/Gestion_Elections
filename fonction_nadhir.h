typedef struct
{
    int identifiant ;
    int capacite_observateurs;
    int capacite_electeurs;
    int municipalite;
    int salle;
    int id_agent_bv;
    }gestion_bv;
int ajouter(char *filename[], gestion_bv G );
int modifier( char *filename, int, gestion_bv G);
int supprimer(char *filename, int id_agent_bv );
gestion_bv chercher(char *filename, int id_agent_bv );
