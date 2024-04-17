/*
In this code, we will get a Number form user and then calculate total for even numbers from 2 to Number.

Developer = Barış Someroğlu 
Date = 17.04.2024 - 10:30 pm
*/


#include <iostream>

using namespace std;

// Prototype declaration for functions
void Result(int);
int OddTotal(int);

// Global variable definition
int Total = 0;

int main()
{
	int Number;

	cout << "Please Enter a Number = ";
	cin >> Number;

	// Call the function
	Result(Number);

	return 0;
}

// Function definiton
void Result(int Number)
{
	cout << "Result is = " << OddTotal(Number) << endl;
}

// Function definiton
int OddTotal(int Number)
{
	if (Number % 2 == 0)
	{
		int i = 2;

		do
		{
			Total += i;

			i += 2;

		} while (i <= Number);
	}


	else
	{
		int i = 2;

		do
		{
			Total += i;

			i += 2;

		} while (i < Number);
	}

	return Total;
}
