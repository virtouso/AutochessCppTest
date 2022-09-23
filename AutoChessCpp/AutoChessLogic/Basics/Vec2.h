#pragma once

namespace Basics
{
    class Vec2Int
    {
    public:
        int X,Y;
        Vec2Int(int x, int y) {X=x; Y=y;  }
        bool Equals(const Vec2Int* other) const;
    
    };

    class Vec2
    {
    public:
        float X, Y;

        Vec2(float x, float y) {X=x; Y=y;  }
        bool Equals(const Vec2* other) const;
    };
}