#include "Vector.h"

Vector::Vector(int _x, int _y)
{
    x = _x;
    y = _y;
}

Vector Vector::operator + (Vector const& _vec) { return Vector(x + _vec.x, y + _vec.y); }
Vector Vector::operator - (Vector const& _vec) { return Vector(x - _vec.x, y - _vec.y); }
Vector Vector::operator * (int const& _vec) { return Vector(x * _vec, y * _vec); }
Vector Vector::operator / (int const& _vec) { return Vector(x / _vec, y / _vec); }

bool Vector::operator ! () { if (x == -1 || y == -1) return true; return false; }

bool Vector::operator < (Vector const& vec) { if (x < vec.x && y < vec.y) return true; return false; }
bool Vector::operator > (Vector const& vec) { if (x > vec.x && y > vec.y) return true; return false; }
bool Vector::operator <= (Vector const& vec) { if (x <= vec.x && y <= vec.y) return true; return false; }
bool Vector::operator >= (Vector const& vec) { if (x >= vec.x && y >= vec.y) return true; return false; }
