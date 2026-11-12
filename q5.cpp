//Create a Point class with private members x and y representing coordinates. Implement a friend function distance that calculates the Euclidean distance between two Point objects. The distance function should be able to access the private x and y members of the Point objects directly.
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    double x, y;

public:
    void input()
    {
        cout << "Enter x and y coordinates: ";
        cin >> x >> y;
    }

    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    friend void distance(Point p1, Point p2);
};
  void distance (Point p1,Point p2)
{
	double d;
	d=sqrt((p2.x-p1.x)*(p2.x-p1.x)+
			(p2.y-p1.y)*(p2.y-p1.y));
	cout<<"Distance="<<d;
}

int main()
{
    Point p1, p2;

    cout << "Enter first point:" << endl;
    p1.input();

    cout << "Enter second point:" << endl;
    p2.input();

    cout << "\nFirst point: ";
    p1.display();

    cout << "Second point: ";
    p2.display();

    distance(p1, p2);

    return 0;
}

