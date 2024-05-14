#ifndef __PARALLELEPIPEDE_CPP
#define __PARALLELEPIPEDE_CPP

#include "Parallelepipede.hpp"
#include "Rectangle.hpp"
#include <iostream>

using namespace std;

Parallelepipede::Parallelepipede(Rectangle base, float hauteur)
{
    this->base = base;
    this->hauteur = hauteur;
}

Parallelepipede::~Parallelepipede()
{
}

Rectangle Parallelepipede::getBase()
{
    return base;
}

float Parallelepipede::getHauteur()
{
    return hauteur;
}

void Parallelepipede::setBase(Rectangle base)
{
    this->base = base;
}

void Parallelepipede::setHauteur(float hauteur)
{
    this->hauteur =  hauteur;
}

void Parallelepipede::afficher()
{
    cout << "la Parallèlepipede de base : ";
    base.afficher();
    cout << " et de hauteur : " << hauteur << endl ;
}

double Parallelepipede::volume()
{
    return((base.surface())*hauteur);
}

#endif