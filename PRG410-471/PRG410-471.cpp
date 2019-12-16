// PRG410-471.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double a, b, c, x;
double discriminant;

int main()
{
	cout << "Enter the value of \"a\": ";
	cin >> a;
	cout << "\nEnter the value of \"b\": ";
	cin >> b;
	cout << "\nEnter the value of \"c\": ";
	cin >> c;
	cout << endl;

	discriminant = pow(b, 2) - (4 * a * c);

	if (discriminant == 0)
	{
		cout << "The equation has a repeated root." << endl;
		x = ((-b) + sqrt(discriminant)) / (2 * a);
		cout << showpoint << "It is: " << setprecision(2) << fixed << x << endl;
	}
	else if (discriminant > 0)
	{
		cout << discriminant << " is the discriminant" << endl;
		cout << "The equation has two real roots." << endl;
		x = ((-b) + sqrt(discriminant)) / (2 * a);
		cout << showpoint << setprecision(2) << fixed;
		cout << "They are: " << x << " & ";
		x = ((-b) - sqrt(discriminant)) / (2 * a);
		cout << x << endl;
	}
	else
		cout << "The equation has two complex roots." << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
