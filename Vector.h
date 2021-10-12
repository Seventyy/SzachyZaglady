#pragma once

class Vector
{
public:
    int x, y;
    Vector(int _x = -1, int _y = -1);

    Vector operator + (Vector const& _vec);
    Vector operator - (Vector const& _vec);
    Vector operator * (int const& _vec);
    Vector operator / (int const& _vec);

    bool operator ! ();

    bool operator < (Vector const& vec);
    bool operator > (Vector const& vec);
    bool operator <= (Vector const& vec);
    bool operator >= (Vector const& vec);
};