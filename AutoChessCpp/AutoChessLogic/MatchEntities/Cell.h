#pragma once
#include "../Basics/Vec2.h"

class ICell
{
public:
    virtual ~ICell() = default;
    virtual Basics::Vec2Int Position() =0;
    virtual Basics::Vec2 CenterPosition() =0;
};

class Cell final : public ICell
{
public:
    Cell(Basics::Vec2Int position);
    Basics::Vec2Int Position() override;
    Basics::Vec2 CenterPosition() override;

private:
    Basics::Vec2Int _position;
};
