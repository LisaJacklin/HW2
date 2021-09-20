// rice.cpp 
// Lisa Jacklin
// CS 203
// 9/18/2021

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

		/*	how many moves needed for about 1000 grains of rice.
		if (grain >= 1000) {
			std::cout << grain;
			
			std::cout << "\n";
			std::cout << move;
			std::cout << " are needed to obtain about 1000 grains of rice";

			return 0;
		}

		how many moves needed for a million grains of rice.
		else if (grain >= 1000000) {
			std::cout << grain;

			std::cout << "\n";
			std::cout << move;
			std::cout << " are needed to obtain about 1 million grains of rice";

			return 0;
		}

		*/
		if (grain >= 1000000000) {
			std::cout << grain;

			std::cout << "\n";
				std::cout << move;
			std::cout << " are needed to obtain about a billion grains of rice";

			return 0;
		}

		std::cout << " The largest number of squares that can be calculated of grains with int is 64";
		std::cout << " The largest number of squares that can be calculated of grains with double is 128";

	}


}
