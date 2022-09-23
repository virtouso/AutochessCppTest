#include "Vec2.h"

namespace Basics
{
    bool Vec2::Equals(const Vec2* other) const
    {
        return this->X==other->X && this->Y== other->Y; 
    }


    bool Vec2Int::Equals(const Vec2Int* other) const
    {
        return this->X==other->X && this->Y== other->Y; 
    }
}