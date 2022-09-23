#pragma once

namespace Basics
{
    class Vec2Int
    {
    public:
        int X,Y;

        bool Equals(const Vec2Int* other) const;
    
    };

    class Vec2
    {
    public:
        int X, Y;


        bool Equals(const Vec2* other) const;
    };
}