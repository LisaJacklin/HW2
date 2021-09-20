// names.cpp 
// Lisa Jacklin
// Cs 201
// 9/15/2021
// Requirements: std::vector class with a variety of loops
// 
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{

    //function prototype to use
    void InputNames(std::vector<std::string> &names);

    for (int i = 0; i < 10; i++) {
        std::string name;
        std::cout << "Please enter a name: ";
        std::cin >> name; 
        std::cout << "\n";
    }
    return 0;


}


//write and test a function that searches for a name on the list
//return a bool value for if the name exists or not
//use the prototype
//bool DoesNameExist(const std::string& nameToFind, const std::vector<std::string>& names);

//write a function that takes name lits and prints them out
//void PrintNames(const std::vector<std::string>& names);

//write a function taking a list of names and does smething interesting
//use the function prototype for print names as a basis for this new function

