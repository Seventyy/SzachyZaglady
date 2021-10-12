#include "Pirug.h"
#include <iostream>
#include <math.h>


void pirug_kwadratowy()
{
    float a = 0;
    float b = 0;
    float c = 0;
    float x1 = 0;
    float x2 = 0;
    float x3 = 0;
    float d = 0; //delta
    //float ds; //delta switch

    std::cout << "podaj wartosci a, b i c (w tej kolejnosci)" << std::endl;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a == 0.0)
    {
        std::cout<< "rownianie liniowe" << std::endl;
    }
    else
    {
        d = b * b - 4 * a * c;
        std::cout<< d << std::endl;

        if (d < 0.0)
        {
            std::cout<< "brak rozwionzan, delta mniejsza od 0" << std::endl;
        }
        else if (d == 0.0)
        {
            x1 = -b / 2 * a;
            std::cout<< "jedno rozwiozanie: " << x1 << std::endl;
        }
        else if (d > 0.0)
        {
            x2 = (-b + sqrt(d));
            x3 = (-b - sqrt(d));
            std::cout<< "dwa rozwiozania: " << x1 << " i " << x2 << std::endl;
        }
    }




    /*
    if ( a == 0)
     {
         st::cout<< "rownianie liniowe" << endl;
     }
     else
     {
         d = b*b - 4*a*c;
         st::cout<< d << endl;

         switch (d == ds);

             case (ds < 0.0):
             st::cout<< "brak rozwiozan" << endl;
             break;

             case (ds == 0.0):
             x = -b / 2a
             break;

             case (ds > 0.0)
     }
 */
}