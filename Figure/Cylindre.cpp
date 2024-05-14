#ifndef __CYLINDRE_CPP
#define __CYLINDRE_CPP
#define PI 3.141593

#include "Cylindre.hpp"
#include <iostream>
#include "Cercle.hpp"

using namespace std;

Cylindre::Cylindre(Cercle base, float hauteur)
{
    this->base = base;
    this->hauteur =  hauteur;
}

Cylindre::~Cylindre()
{    
}

Cercle Cylindre::getBase()
{
    return base;
}

float Cylindre::getHauteur()
{
    return hauteur;
}

void Cylindre::setBase(Cercle base)
{
    this->base = base;
}

void Cylindre::setHauteur(float hauteur)
{
    this->hauteur = hauteur;
}

void Cylindre::afficher()
{
    cout << "Cylindre de base : ";
    base.afficher();
    cout << "et de hauteur : " << hauteur << endl;                                                                           
}	

float Cylindre::volume()
{
    return ((base.surface())*hauteur);
}

#endif