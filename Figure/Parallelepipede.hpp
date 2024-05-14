#ifndef __PARALLELEPIPEDE_HPP
#define __PARALLELEPIPEDE_HPP

#include "Rectangle.hpp"

class Parallelepipede
{
    public:
        Parallelepipede(Rectangle base=Rectangle(), float hauteur=0);
        ~Parallelepipede();
        Rectangle getBase();
        float getHauteur();
        void setBase(Rectangle base);
        void setHauteur(float hauteur);
        void afficher();
        double volume();

    
    private:
        Rectangle base;
        float hauteur;
};

#endif