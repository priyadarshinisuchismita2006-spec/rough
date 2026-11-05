 //Create a class Sample whose data members are x and y of double type. Add member functions to input the data and display the data. Add a Frie//nd Function to Calculate Average of the objects of sample class.
#include<iostream>
using namespace std;
class sample
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
                friend void avg(sample m);
};
        void avg(sample m)
        {
                int average=(m.x+m.y)/2;
                cout<<"average of x and y is"<<average;
        }
        int main()
        {
                sample m;
                m.getdata();
                m.display();
                avg(m);
        }
                   
