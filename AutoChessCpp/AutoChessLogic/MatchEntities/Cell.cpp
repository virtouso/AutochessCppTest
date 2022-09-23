#include "Cell.h"

Cell::Cell(Basics::Vec2Int position)
{
    Cell::_position = position;
}

Basics::Vec2Int Cell::Position()
{
    return _position;
}

Basics::Vec2 Cell::CenterPosition()
{
    return Basics::Vec2(_position.X + 0.5f, _position.Y + 0.5f);
}
