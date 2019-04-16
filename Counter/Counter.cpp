// Counter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>;
#include "Counting.h";
#include <string>;
using namespace std;


int main()
{
	int x = 0;
	int y = 0;
	int result = 0;
	char oper = '>';

	cout << "Counter Application: (format:1>2 [count until 2 from 1] or 1<2 [count until 1 from 2]) {hint: think > or < as an arrow}" << endl << endl;
	

	Counting c;
	while (true)
	{
		cin >> x >> oper >> y;
		result = c.toWhere(x, oper, y);
	}

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
