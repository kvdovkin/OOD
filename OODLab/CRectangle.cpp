#include "CRectangle.h"

double CRectangle::CalcPerim()
{
    double a1 = p2.GetY() - p1.GetY();
    double a2 = p2.GetX() - p1.GetX();
    return 2 * a1 + 2 * a2;
}

double CRectangle::CalcSquare()
{
    double a1 = p2.GetY() - p1.GetY();
    double a2 = p2.GetX() - p1.GetX();
    return a1 * a2;
}

std::string CRectangle::GetType() const
{
    return type;
}

CPoint CRectangle::GetCenter() const
{
    return center;
}

bool CRectangle::CheckClick(int x, int y)
{
    if (rectangle.getGlobalBounds().contains(x, y))
        return true;
    else
        return false;
}

void CRectangle::MoveShape(int x, int y, sf::RenderWindow& window)
{
    rectangle.setPosition(x, y);
    rectangle.setOutlineThickness(2);
    center.SetX(x);
    center.SetY(y);
}

void CRectangle::Draw(sf::RenderWindow& window)
{
    window.draw(rectangle);
}

void CRectangle::DeleteBorder()
{
    rectangle.setOutlineThickness(0);
}
