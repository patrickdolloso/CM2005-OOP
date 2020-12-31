#include <iostream>
#include <vector>
#include <string>

int x1, y1, z1;
int x2, y2, z2;

class Vec3D
{
    public:
        int x;
        int y;
        int z;
};

Vec3D vec1;

void doSomething()
{
    vec1.x = 10;
    vec1.y = 12;
    vec1.z = 25;

}

int main()
{
    doSomething();
    return 0;
}