//Create a class Mean whose data members are x and y of double type. Add member functions to input the data and display the data. Add a Friend// Function to Calculate mean of the data member of the class.
#include<iostream>
using namespace std;
class mean
{
	double x;
	double y;
	public:
	void getdata()
	{
		cout<<"Enter the value of x:";
		cin>>x;
		cout<<"Enter the value of y:";
		cin>>y;
	}
		void display()
		{
			cout<<"value of x and y"<<x<<y;
		}
		friend void me(mean m);
};
	void me(mean m)
	{
		int men=(m.x+m.y/2);
		cout<<"mean of x and y is"<<men;
	}
	int main()
	{
		mean m;
    		m.getdata();
		m.display();
		me (m);
	}

