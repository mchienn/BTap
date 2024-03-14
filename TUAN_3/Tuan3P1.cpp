#include <bits/stdc++.h>
using namespace std;

struct Point{
    float x, y;

};

void print (Point p)
{
    cout << p.x << " " << p.y;
}

Point midPoint (const Point A, const Point B)
{
    Point C;
    C.x = (A.x + B.x) / 2;
    C.y = (A.y + B.y) / 2;
    return C;
}


int main()
{
    Point A;
    A.x = 10;
    A.y = 12;

    Point B;
    B.x = 5;
    B.y = 9;

    print (midPoint(A, B));
}