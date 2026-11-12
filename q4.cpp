//Create a class Matrix whose data member is a[4][4] and member functions are input() and show() to take the values and display the values. Add a Friend Function that adds the objects of two matrices and display the result.
#include <iostream>
using namespace std;

class Matrix
{
    int a[4][4];

public:
    void input()
    {
        cout << "Enter matrix elements:" << endl;

        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void show()
    {
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }

    friend void add(Matrix m1, Matrix m2);
};
void add(Matrix m1,Matrix m2)
{
	int c[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			c[i][j]=m1.a[i][j]+m2.a[i][j];
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
}


int main()
{
    Matrix m1, m2;

    cout << "Enter first matrix:" << endl;
    m1.input();

    cout << "Enter second matrix:" << endl;
    m2.input();

    cout << "\nFirst Matrix:" << endl;
    m1.show();

    cout << "\nSecond Matrix:" << endl;
    m2.show();

    cout << "\nAddition of matrices:" << endl;
    add(m1, m2);

    return 0;
}

