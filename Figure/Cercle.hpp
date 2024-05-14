#ifndef __CERCLE_HPP
#define __CERCLE_HPP

#include "Point.hpp"

class Cercle
{
		public:
			Cercle();
			Cercle(float rayon ,Point centre);
			float getRayon();
			Point getCentre();
			void setRayon(float rayon);
			void setCentre(Point centre);
			~Cercle();
			void afficher();
			float perimetre();
			float surface();	

		private:
			float rayon;
			Point centre; 

};

#endif
