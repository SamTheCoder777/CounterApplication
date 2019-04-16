#include "Counting.h"
#include <iostream>
#include <Windows.h>


int Counting::toWhere(int x, char oper, int y)
{

	if (oper == '>') {
		for (int i = x; i <= y; ++i)
		{
			std::cout << i << std::endl << std::endl;
			Sleep(100);
		}
	}



	if (oper == '<') {
		for (int e = y; e >= x; e--)
		{
			std::cout << e << std::endl << std::endl;
			Sleep(100);
		}
	}


	else if (oper != '<' && oper != '>') {
		std::cout << "Incorrect use of the code, please try again." << std::endl;
	}


	return 0;
	
}


