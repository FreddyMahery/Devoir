#ifndef __RECTANGLE_CPP
#define __RECTANGLE_CPP

#include <iostream>
#include "Rectangle.hpp"

using namespace std;

Rectangle::Rectangle()
{
	largeur = 0;
	longeur = 0;
	
}

Rectangle::Rectangle(float largeur, float longeur)
{
	this->largeur = largeur; 
	this->longeur = longeur;
}

Rectangle::~Rectangle()
{	
}

float Rectangle::getLargeur()
{
	return largeur;

}

float Rectangle::getLongeur()
{
	return longeur;

}

void Rectangle::setLargeur(float largeur)
{
	this->largeur = largeur;
}

void Rectangle::setLongeur(float longeur)
{
	this->longeur = longeur;
}

void Rectangle::afficher()
{
	cout << "Rectangle de largeur: " << largeur;
	cout << " et de longeur: " << longeur << endl;
}

double Rectangle::perimetre()
{
	return (longeur+largeur);

}

double Rectangle::surface()
{
	return (longeur*largeur);
}


#endif
