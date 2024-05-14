#ifndef __SPHERE_HPP
#define __SPHERE_HPP

#include "Point.hpp"

class Sphere
{
		public:
			Sphere();
			Sphere(float rayon ,Point centre);
			float getRayon();
			Point getCentre();
			void setRayon(float rayon);
			void setCentre(Point centre);
			~Sphere();
			void afficher();
			double volume();	

		private:
			float rayon;
			Point centre; 

};

#endif
