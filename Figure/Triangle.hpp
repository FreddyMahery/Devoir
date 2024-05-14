#ifndef __TRIANGLE_HPP
#define __TRIANGLE_HPP

class Triangle
{
    public:
        Triangle(float cote1=0, float cote2=0, float angle=0);
        ~Triangle();
        float getCote1();
		float getCote2();
        float getAngle();
		void setLargeur(float Cote1);
		void setLongeur(float Cote2);
        void setAngle(float angle);
        void afficher();

    private:
        float cote1;
        float cote2;
        float angle;
};

#endif