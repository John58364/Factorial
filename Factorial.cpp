
#include <iostream>
#include "Factorial.h"

using namespace std;

int main()
{
	// Create the variables
	unsigned long long n;
	int y = 0;
	unsigned long long k = 0;
	unsigned long long nconstant = 0;

	// Prompt the user for variable n
	cout << "Let's compute binomial coefficients." << endl << endl;
	cout << "Enter a non-negative integer n: ";
	cin >> n;

	// Create an n constant and factorial member 'fact'
	nconstant = n;
	factorial fact;

	cout << "\n(x + y)^" << n << " = " << endl << endl;

	// Output the expanded factorial until n = 0
	while(n != 0)
	{
		unsigned long long coeff = fact.coeff(nconstant, k);
		cout << coeff << " * x^" << n << " * y^" << y << " + ";
		n--;
		y++;
		k++;
	}
	cout << "1 * x^" << n << " * y^" << y;

}
