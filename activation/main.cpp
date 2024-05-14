#include <iostream>
#include "Activation/Activation.hpp"

using namespace std;

int main()
{
    Activation test = Activation();
    if (test.getStatue() == false)
    {
        test.verificationActivation();
    }
    if (test.getPoint() > 0)
    {

        if (test.getStatue() == true)
        {
            cout << "Salut les amie" << endl;
        }
        else
        {
            cout << "echec d'activation" << endl;
        }
    }
    else
    {
        cout << "Acheter le clé au pres de votre founiseur" << endl;
    }
    return 0;
}