#ifndef __CYLINDRE_HPP
#define __CYLINDRE_HPP

#include "Cercle.hpp"

class Cylindre
{
    public:
        Cylindre(Cercle base=Cercle(), float hauteur=0);
        ~Cylindre();
		Cercle getBase();
        float getHauteur();
		void setBase(Cercle base);
        void setHauteur(float hauteur);
		void afficher();	
        float volume();


    private:
        Cercle base;
        float hauteur;
};

#endif