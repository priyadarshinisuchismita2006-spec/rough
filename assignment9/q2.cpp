
//WAP to define a class Student that contains two private data member std_name[20] and std_roll, two public member functions for getting values of std_roll and std_name[20], and display() function to display the value. A class is derived from base class student whose name is test and members are marks in 3 subjects. Include appropriate functions to input and display the marks. Another class Sport is having data member score and member functions to take the input and display the score. Derive a class result from test and sports that calculates and finds the percentage of a student and display it.

#include <iostream>
using namespace std;


class Student {
private:
    char std_name[20];
    int std_roll;

public:
    void get_student() {
        cout << "Enter Student Name: ";
        cin >>std_name;
        cout << "Enter Roll Number: ";
        cin >> std_roll;
    }

    void display() {
   
        cout << "Name: " << std_name << endl;
        cout << "Roll Number: " << std_roll << endl;
    }
};


class Test : public Student {
protected:
    float sub1, sub2, sub3;

public:
    void get_marks() {
        cout << "Enter marks for 3 subjects (out of 100 each): ";
        cin >> sub1 >> sub2 >> sub3;
    }

    void display_marks() {
        cout << "Subject 1 Marks: " << sub1 << endl;
        cout << "Subject 2 Marks: " << sub2 << endl;
        cout << "Subject 3 Marks: " << sub3 << endl;
    }
};

class Sport {
protected:
    float score;

public:
    void get_score() {
        cout << "Enter Sports Score (out of 100): ";
        cin >> score;
    }

    void display_score() {
        cout << "Sports Score: " << score << endl;
    }
};

class Result : public Test, public Sport {
private:
    float total;
    float percentage;

public:
    void calculate_and_display() {
        total = sub1 + sub2 + sub3 + score;
        percentage = (total / 400.0) * 100.0; 

        display();         
        display_marks();   
        display_score();   
        cout << "Total Score: " << total << " / 400" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result r;

    r.get_student();
    r.get_marks();
    r.get_score();
    r.calculate_and_display();

    return 0;
}

