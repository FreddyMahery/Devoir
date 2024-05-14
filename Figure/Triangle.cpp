#ifndef __TRIANGLE_CPP
#define __TRIANGLE_CPP

#include "Triangle.hpp"
#include <iostream>

using namespace std;

Triangle::Triangle(float cote1, float cote2, float angle)
{
    this->cote1 = cote1;
    this->cote2 = cote2;
    this->angle = angle;
}
Triangle::~Triangle()
{
}
        
float Triangle::getCote1()
{
    return cote1;
}

float Triangle::getCote2()
{
    return cote2;
}

float Triangle::getAngle()
{
    return angle;
}
		
void Triangle::setLargeur(float Cote1)
{
    this->cote1 = cote1;
}

void Triangle::setLongeur(float Cote2)
{
     this->cote2 = cote2;
}
    
void Triangle::setAngle(float angle)
{
     this->angle = angle;
}
        
void Triangle::afficher()
{
    cout << "triangle de cote  " << cote1 << " et " << cote2;
    cout << " avec une angle de " << angle << " degre." << endl;
}

#endif