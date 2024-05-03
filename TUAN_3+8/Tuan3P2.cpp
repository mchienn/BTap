#include <bits/stdc++.h>
using namespace std;

struct Point{
    float x, y;

    Point(){
        x = 0; y = 0;
    }

    Point (float _x, float _y)
    {
        x = _x;
        y = _y;
    }

};

struct Rect
{
    float x,y,w,h;
    Rect()
    {
        x = 0; y = 0; w = 0; h = 0;
    }

    Rect (float _x, float _y, float _w, float _h)
    {
        x = _x;
        y = _y;
        w = _w;
        h = _h;
    }
};

struct Ship
{
    Rect size;
    string id;
    float dx, dy;

    move ()
    {
        
    }

};

display 

bool contains (const Point p, const Rect r)
{
    if (p.x >= r.x && p.x <= (r.x + r.w) && p.y >= r.y && p.y <= (r.y+r.h))
    {
        return true;
    }
    return false;
}

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
    Point A (1,1);
    Rect R (0, 0, 5, 5);
    if (contains (A, R))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}