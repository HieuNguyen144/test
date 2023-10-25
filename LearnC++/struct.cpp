#include <iostream>

struct point
{
    int x, y;
};

int main()
{
    struct point p1 = {1, 2};
    struct point *p2 = &p1;
    std::cout << p2->x << " " << p2->y << std::endl;

    return 0;
}