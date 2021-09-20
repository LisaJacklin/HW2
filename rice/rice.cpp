// rice.cpp 
// Lisa Jacklin
// CS 203
// 9/18/2021
//Tasks: 
//double rice grains per move. for values 1000, 1 mil, and 1 bil
//answer questions (have them print):
//1. what is the largest number of squares for which you can calculate the exact 
//number of grains using an int?
//2. what is the largest number of squares you can calculate the approximate
// number of grains using a double?

#include <iostream>



int main()
{

	int move = 1;
	int rice = 1;


	while (move > 0) {
		std::cout << move;
		std::cout << " : ";

		int grain = rice * rice;
		
		std::cout << grain;
		std::cout << "\n";
		++rice;
		++move;

		if (grain >= 1000) {
			std::cout << grain;
			std::cout << move;
			return 0;
		}
	}


}
