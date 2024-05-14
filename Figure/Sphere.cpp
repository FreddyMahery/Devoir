#ifndef __SPHERE_CPP
#define __SPHERE_CPP

#define PI 3.141593
#include <iostream>
#include "Sphere.hpp"
#include "Point.hpp"

using namespace std;

Sphere::Sphere()
{
 	rayon = 0;
	centre = Point(0,0);
} 

Sphere::Sphere(float rayon ,Point centre)
{
	this->rayon = rayon;
	this->centre = centre;
}

float  Sphere::getRayon()
{
	return rayon;
}

Point Sphere::getCentre()
{
	return centre;
}

void Sphere::setRayon(float rayon)
{
	this->rayon = rayon;
}


void Sphere::setCentre(Point centre)
{
	this->centre = centre;	
}


Sphere::~Sphere()
{
}

void Sphere::afficher()
{
	cout << "Sphere de centre : ";
	centre.afficher(); 
	cout << "et rayon : " << rayon << endl;
}

double Sphere::volume()
{
	return (1.33333*PI*rayon*rayon*rayon);
}

#endif
