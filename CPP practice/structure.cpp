#include <iostream>
using namespace std;

struct Point
{
    int x, y;
} p2;

int main()
{
    struct Point p1;

    // Accessing members of point p1
    p1.x = 20;
    p2.x=p1.x;
    p2.y=50;
    p1.y=p2.y;
    cout << "x = " << p1.x << ", y = " << p1.y<< ", p2.y = " << p2.y<<endl;

    return 0;
}