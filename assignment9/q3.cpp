//WAP to define a class Base that contains a private data member a, one public member b and three public member functions for getting values of a and b, returning private members and show() function to display the values. Derive a class named Derived from the base class that contains one private data member c and two public member functions to multiply a, b and c and to display the values. Create an object of derived class and perform these operations.
#include <iostream>
using namespace std;

class base
{
    int a;

public:
    int b;

    void get_show(int x,int y)
    {
        a=x;
	b=y
    }
};

class derive: public base
{

    int c;

public:
    void multipy()
    {
        c=a*b;
    }

    void display()

#include <iostream>
using namespace std;

// Base Class
class Base {
private:
    int a;

public:
    int b;

    // Function 1: Get values of a and b
    void getValues(int x, int y) {
        a = x;
        b = y;
    }
WAP to define a class Base that contains a private data member a, one public member b and three public member functions for getting values of a and b, returning private members and show() function to display the values. Derive a class named Derived from the base class that contains one private data member c and two public member functions to multiply a, b and c and to display the values. Create an object of derived class and perform these operations.

    // Function 2: Return private member 'a'
    int getA() {
        return a;
    }

    // Function 3: Display values of a and b
    void show() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

// Derived Class
class Derived : public Base {
private:
    int c;

public:
    // Helper function to set the value of c
    void setC(int z) {
        c = z;
    }

    // Function 1: Multiply a, b, and c
    int multiply() {
        // 'a' is private in Base, so we access it using getA()
        // 'b' is public in Base, so we can access it directly
        return getA() * b * c;
    }

    // Function 2: Display all values and the product
    void display() {
        show(); // Calls Base class show() to display a and b
        cout << "c = " << c << endl;
        cout << "Multiplication (a * b * c) = " << multiply() << endl;
    }
};

int main() {
    Derived obj;

    // Setting values using Base and Derived methods
    obj.getValues(5, 4); // Sets a = 5, b = 4
    obj.setC(3);         // Sets c 
    obj.display();

    return 0;
}
	    
