#include "Point.h"
#include <iostream>



void Point::AfficherPoint()
{
    std::cout << "X = " << X << " Y = " << Y << std::endl;
}

void Point::SetXY(double ValX, double ValY)
{
    X = ValX;
    Y = ValY;
}

double Point::GetX()
{
    return X;
}

double Point::GetY()
{
    return Y;
}
