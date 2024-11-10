#include <bits\stdc++.h>
using namespace std;
typedef long long int ll;

// structure of a point with a print function and a constructor to initialize the point
struct Point
{
    double x, y;
    Point()
    {
        x = (rand() % 10000) - 5000;
        y = (rand() % 10000) - 5000;
    }
    void Print()
    {
        cout << "[" << x << "," << y << "]";
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // lamda in sorting
    // let us sort the points by taking them in a vector
    vector<Point> points;
    // initialize the points
    for (int i = 0; i < 100; i++)
        points.push_back(Point());

    cout << "unsorted " << endl;
    for (int i = 0; i < 10; i++)
        points[i].Print();

    sort(points.begin(), points.end(),
    //comapator
         [](const Point& a, const Point& b)
         
         {
            return (a.x * a.x) + (a.y*a.y) < (b.x *b.x) + (b.y*b.y);
         }
    );
}