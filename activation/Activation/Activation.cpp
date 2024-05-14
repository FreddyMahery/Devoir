#ifndef __ACTIVATION_CPP
#define __ACTIVATION_CPP

#include "Activation.hpp"

Activation::Activation()
{
    string nbressaie;
    ifstream fs("NombreDEssaie.txt");
    if (fs.fail())
    {
        cout << "NombreDEssaie.txt introuvable" << endl,
            point = 0;
    }
    else
    {
        fs >> nbressaie;
        if (nbressaie == "Activaton réussit")
        {
            statue = true;
        }
        else
        {
            point = stoi(nbressaie);
        }
        fs.close();
    }
}

Activation::~Activation()
{
}

bool Activation::verificationActivation()
{
    ifstream fs("activation.txt");
    if (fs.fail())
    {
        cout << "fichier d'activation introuvable" << endl;
        return false;
    }
    else
    {
        string EssaieCle;
        fs >> EssaieCle;
        fs.close();
        if (EssaieCle == cle)
        {
            cout << "Activation réussit" << endl;
            activation();
            return true;
        }
        else
        {
            string comptagePoint;
            ifstream tryFyle("NombreDEssaie.txt");
            tryFyle >> comptagePoint;
            tryFyle.close();
            int EssaiePoint = stoi(comptagePoint), valeur;
            ofstream w("NombreDEssaie.txt");
            valeur = (EssaiePoint - 1);
            w << valeur;
            w.close();
            return false;
        }
    }
}

void Activation::activation()
{
    ofstream fs("NombreDEssaie.txt");
    fs << "Activation réussit";
    statue = true;
    fs.close();
}

bool Activation::getStatue()
{
    return statue;
}

int Activation::getPoint()
{
    return point;
}

#endif