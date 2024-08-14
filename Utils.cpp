#include <Utils.h>

#include <cmath>

double Utils::dist(const int &x1, const int &y1, const int &x2, const int &y2)
{
    return pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5);
}
