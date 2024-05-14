#ifndef __POINT_HPP
#define __POINT_HPP

class Point
{
    public:
	    Point();
        Point(float x, float y);
        ~Point();
	    float getX();
        float getY();
        void setX(float x);
        void setY(float y);
        void afficher();
        void shift(float dx, float dy);
    protected:
        float x,y;
};
float distance (Point p1, Point p2);

#endif
