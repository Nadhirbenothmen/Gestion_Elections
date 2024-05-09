#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "election.h"



void
on_Valider_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}




void
on_button2_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button3_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button4_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button5_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button6_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonsouhailaj_clicked             (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *id,*nb_conseillers ;
GtkWidget*output ;
election e;
id=lookup_widget(objet,"entrysouhailaj") ;
nb_conseillers=lookup_widget(objet,"entrysouhailaj1") ;
ajouter("ELECTION.txt", e);

}


void
on_buttonsouhailmod_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonsouhailsup_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonsouhailaff_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button27_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonconfha_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonmodha_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttoncherha_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonaffha_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on__buttonsuppha_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttoncherha2_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_Validerauth_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}

