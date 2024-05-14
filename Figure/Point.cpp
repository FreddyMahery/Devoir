#ifndef __POINT_CPP
#define __POINT_CPP

#include <iostream>
#include <cmath>
#include "Point.hpp"

using namespace std;

//constructeur par default
Point::Point()
{
	x=0;
	y=0;
}

//constructeur avec paramétre
Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

//destructeur
Point::~Point()
{
}

//Méthode Getters ou accesseur
float Point::getX()
{
	return x;
}

float Point::getY()
{
	return y;
}

//Méthode Setters ou mutation
void Point::setX(float x)
{
	this->x = x;
}

void Point::setY(float y)
{
	this->y = y;
}

//Méthode affichage
void Point::afficher()
{
	cout << "("<< x <<" , "<< y <<")"<<endl;
}

//Méthode décalage d'une point
void Point::shift (float dx, float dy)
{
	x = x + dx;
	y = y + dy;
}

//Méthode distance
float distance(Point p1, Point p2)
{
	float d(0);
	 d = sqrt((pow(p1.getX() - p2.getX(),2)+ pow(p1.getY() - p2.getY(),2)));
	return d;
}

#endif
