#ifndef __ACTIVATION_HPP_
#define __ACTIVATION_HPP_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Activation
{
    public:
        Activation();
        ~Activation();
        bool verificationActivation();
        void activation();
        bool getStatue();
        int getPoint();

    private:
        string cle = "1234";
        int point;
        bool statue = false;
};

#endif