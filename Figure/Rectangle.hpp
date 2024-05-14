#ifndef __RECTANGLE_HPP
#define __RECTANGLE_HPP

class Rectangle{
	public:
		Rectangle();
		Rectangle(float largeur , float longeur);
		~Rectangle();
		float getLargeur();
		float getLongeur();
		void setLargeur(float longeur);
		void setLongeur(float largeur);
		void afficher();
		double perimetre();
		double surface();
		
	private:
		float largeur;
		float longeur;
};


#endif
