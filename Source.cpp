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

		if (left >= 0 && right >=0 && operand !=NULL)
		{
			switch (operand)
			{
			case '+':
				std::cout << left << " + " << right << " = " << std::fixed << std::setprecision(2) << (left+right) << std::endl;
				break;
			case '-':
				std::cout << left << " - " << right << " = " << std::fixed << std::setprecision(2) << (left-right) << std::endl;
				break;
			case 'x':
				std::cout << left << " x " << right << " = " << std::fixed << std::setprecision(2) << (left*right) << std::endl;
				break;
			case '/':
				std::cout << left << " / " << right << " = " << std::fixed << std::setprecision(2) << (left/right) << std::endl;
				break;
			default:
				break;
			}
			return 0;
		}
		else
		{
			std::cout << "Error" << std::endl;
			return 1;
		}
	}
	else
	{
		std::cout<< "You have not entered enough arguments." << std::endl;
		std::cout<< "Please veirfy that you are entering a number followed by a operation symbol (+ - / x ) followed by another number " << std::endl;
		return 1;
	}
}