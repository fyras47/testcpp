#ifndef SPECTACLE_H
#define SPECTACLE_H
#include <string>
#include <iostream>
#include <vector>
#include "salle.h"
#include "billet.h"
#include "billet_vip.h"
#include <fstream>

using namespace std;

class spectacle
{
public:
    spectacle();
    virtual ~spectacle();
    spectacle (spectacle &);

    spectacle& operator=(spectacle &s);
    vector<salle>::iterator recherchesalle(int numero);
    bool ajoutersalle(salle &s);
    void affecter_billet(int num_s,int numero);
    float revenu_spec();
    void salle_plus_remplie();
   void enregistrer_vip(int num_s);



protected:

private:
    string nom;
    vector<salle> vs;
    vector<billet*> vb ;
};

#endif // SPECTACLE_H
