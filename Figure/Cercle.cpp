#ifndef __CERCLE_CPP
#define __CERCLE_CPP

#define PI 3.141593
#include <iostream>
#include "Cercle.hpp"
#include "Point.hpp"

using namespace std;

Cercle::Cercle()
{
 	rayon = 0;
	centre = Point(0,0);
} 

Cercle::Cercle(float rayon ,Point centre)
{
	this->rayon = rayon;
	this->centre = centre;
}

float  Cercle::getRayon()
{
	return rayon;
}

Point Cercle::getCentre()
{
	return centre;
}

void Cercle::setRayon(float rayon)
{
	this->rayon = rayon;
}


void Cercle::setCentre(Point centre)
{
	this->centre = centre;	
}


Cercle::~Cercle()
{
}

void Cercle::afficher()
{
	cout << "Cercle de centre";
	centre.afficher(); 
	cout << "et de rayon : " << rayon << endl;
}

float Cercle::perimetre()
{
	return (2*PI*rayon);
}

float Cercle::surface()
{
	return (PI*rayon*rayon);
}

#endif
