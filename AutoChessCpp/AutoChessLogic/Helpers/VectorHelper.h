#pragma once
#include "../Basics/Vec2.h"

class IVectorHelper
{
   virtual float CalculateDirectDistance(Basics::Vec2 pos1, Basics::Vec2 pos2)=0;
   virtual  int CalculateCellDistance(Basics::Vec2Int pos1, Basics::Vec2Int pos2)=0;
};


class VectorHelper
{
public:
    
};
