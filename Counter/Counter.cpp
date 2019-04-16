//yay!!!!!

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

