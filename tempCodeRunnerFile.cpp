// C++ program to illustrate 
// default constructor with
// 'explicit' keyword
#include <iostream>
using namespace std;

class Complex {
private:
	double real;
	double imag;

public:

	// Default constructor
	explicit Complex(double r = 0.0, 
					double i = 0.0): 
					real(r) , imag(i)
	{
	}

	// A method to compare two 
	// Complex numbers
	bool operator == (Complex rhs)
	{
        cout<<rhs.real<<","<<rhs.imag<<endl;
		return (real == rhs.real && 
				imag == rhs.imag);
	}
};

// Driver Code
int main()
{
	// a Complex object
	Complex com1(3.0, 0.0);

	if (com1 == (Complex){3.0,0.0})
		cout << "Same";
	else
		cout << "Not Same";
	return 0;
}
