//Create a class Test and Test1 whose data members are num1 and num2 double type. Add member functions to input the data and display the data for both the classes. Add a Friend Function to Calculate Average of the data members of two class.
#include <iostream>
using namespace std;

class Test1;

class Test
{
    double num1;

public:
    void input()
    {
        cout << "Enter number for Test: ";
        cin >> num1;
    }

    void display()
    {
        cout << "Test number = " << num1 << endl;
    }

    friend void average(Test t, Test1 t1);
};

class Test1
{
    double num2;

public:
    void input()
    {
        cout << "Enter number for Test1: ";
        cin >> num2;
    }

    void display()
    {
        cout << "Test1 number = " << num2 << endl;
    }

    friend void average(Test t, Test1 t1);
};
void average(Test t, Test1 t1)
{
	double avg;
	avg=(t.num1+t1.num2)/2;
	cout<<"average="<<avg;
}

int main()
{
    Test t;
    Test1 t1;

    t.input();
    t1.input();

    cout << endl;
    t.display();
    t1.display();

    average(t, t1);
#include <iostream>
using namespace std;

class Test1;

class Test
{
#include <iostream>
using namespace std;

class Test1;

class Test
{
    double num1;

public:
    void input()
    {
        cout << "Enter number for Test: ";
        cin >> num1;
    }

    void display()
    {
        cout << "Test number = " << num1 << endl;
    }

    friend void average(Test t, Test1 t1);
};

class Test1
{
    double num2;

public:
    void input()
    {
        cout << "Enter number for Test1: ";
        cin >> num2;
"q6.cpp" 68L, 1122B                                                                                          1,1           Top

    double num1;

public:
    void input()
    {
        cout << "Enter number for Test: ";
        cin >> num1;
    }

    void display()
    {
        cout << "Test number = " << num1 << endl;
    }

    friend void average(Test t, Test1 t1);
};

class Test1
{
    double num2;

public:
    void input()
    {
        cout << "Enter number for Test1: ";
        cin >> num2;
"q6.cpp" 68L, 1122B                                                                                          1,1           Top


    return 0;
}

                                    
