#pragma once
#include <iostream>
#include "Vector.h"

class Input
{
public:Œ

    // altenatywne werje inputu
    // anulowanie wybrania figury
    // symbol wie¿y je¿eli jest jedna aby wybraæ (np /K/)
    // cztery symbole na raz bez entera (np a7b2)

    Vector fetchInput(); // próba do skutku uzyskania w³aœciwego inputu
    Vector tryInput(); // uzystanie vektora pozycji poionka z inputu
};
