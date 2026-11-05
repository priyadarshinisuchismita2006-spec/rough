//Create a class Sum whose data member is n of integer type. Add member functions to input the data and display the data. Add a Friend Functio//n to Calculate factorial of the data member of the class.
#include <iostream>
using namespace std;
class sum
{
	int a;
	public:
	void getdata()
	{
		cout<<"enter the value of a:";
		cin>>a;
	}
//	void display(){
//		cout<"value a="<<a<<endl;
//	}
	friend void factorial(sum x);
};
void factorial(sum x)
{
	int fact = 1;

        for(int i = 1; i <= x.a; i++)
        {
            fact = fact * i;
        }
	cout<<"factorial="<<fact;
}
int main()
{
	sum x;
	x.getdata();
//	x.display();
	factorial(x);
}




