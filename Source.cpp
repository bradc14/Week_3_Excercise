#include <iostream>
#include <cstdlib>
#include <iomanip>

int main (int argc, char* argv[])
{

int i=0;
double left=0,right=0;
char operand;


	if (argc == 4)
	{
		left=atof(&argv[1][i]);
		right=atof(&argv[3][i]);
		operand=(argv[2][i]);

		if (left >= 0 && right >=0 && operand !=NULL) //this allows decimals to be entered as well
		{
			switch (operand)
			{
			case '+':
				std::cout << left << " + " << right << " = " << (left+right) << std::endl;
				break;
			case '-':
				std::cout << left << " - " << right << " = " << (left-right) << std::endl;
				break;
			case 'x':
				std::cout << left << " x " << right << " = " << (left*right) << std::endl;
				break;
			case '/':
				std::cout << left << " / " << right << " = " << (left/right) << std::endl;
				break;
			default:
				std::cout << "<number> <+-x/> <number>";
				break;
			}
			return 0;
		}
		else
		{
			std::cout<< "Please verify that you are entering a number followed by a operation symbol (+ - / x ) followed by another number " << std::endl;
			return 1;
		}
	}
	else
	{
		std::cout<< "Please verify that you are entering a number followed by a operation symbol (+ - / x ) followed by another number " << std::endl;
		return 1;
	}
}