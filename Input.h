#pragma once
#include <iostream>
#include "Vector.h"

class Input
{
public:�

    // altenatywne werje inputu
    // anulowanie wybrania figury
    // symbol wie�y je�eli jest jedna aby wybra� (np /K/)
    // cztery symbole na raz bez entera (np a7b2)

    Vector fetchInput(); // pr�ba do skutku uzyskania w�a�ciwego inputu
    Vector tryInput(); // uzystanie vektora pozycji poionka z inputu
};
