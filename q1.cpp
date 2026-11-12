//WAP to define a class space whose data members are x, y, z. Include member functions to initialize the data members, overload the unary (-, +) operators, display the values. Create an object of space class and use overloaded operators on data members.
#include<iostream>
using namespace std;

class space
{
	int x;
	int y;
	int z;
	public:
	 void getdata(int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	}
	void display()
	{
		cout<<x<<y<<z;
	}

	void operator-()
	{
		x=-x;
		y=-y;
		z=-z;
	}
	void operator+()
	{
		x=+x;
		y=+y;
		z=+z;
	}
};
int main()
{
	space s;

    	s.getdata(10,20,30);
	-s;
    	cout << "\nAfter unary minus:" << endl;
   	s.display();

	+s;
   	cout << "\nAfter unary plus:" << endl;
	s.display();
        return 0;
}



