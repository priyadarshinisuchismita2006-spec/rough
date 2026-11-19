//1.Write a C++ program to implement hybrid inheritance by defining a base class Student with data members such as name and roll number. Derive appropriate classes to store marks obtained in different subjects and calculate the student's total marks and percentage. Display the complete student details and result
#include <iostream>
using namespace std;

class student
{
    char name[20];
    int roll;

public:
    void getdata()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the roll number: ";
        cin >> roll;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
    }
};

class marks : virtual public student
{
protected:
    int m1, m2, m3;

public:
    void get_marks()
    {
        cout << "Enter marks for 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void display()
    {
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
    }
};

class total_score : public marks
{
	protected:
    		int score;

	public:
    		void get_score() {
        cout << "Enter total score: ";
        cin >> score;
    }

    void display()
    {
        cout << "Score: " << score << endl;
    }
};

class result : virtual public student, public total_score {
public:
    void cal_per() {
        float r = ((m1 + m2 + m3) / 300.0) * 100;
        cout << "Percentage: " << r << "%" << endl;
    }
};

int main() {
    result r;
    r.getdata();
    r.get_marks();
    r.get_score();
    r.student::display();
    r.marks::display();
    r.total_score::display();
    r.cal_per();

    return 0;
}

