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
#include <cctype>

 //function prototypes
void InputNames(std::vector<std::string>& names);
void PrintNames(const std::vector<std::string>& names);

int main()
{
    std::vector<std::string> name;
    InputNames(name);
    PrintNames(name);

}
 

//function definitions
//takes and inputs 10 names into a list
void InputNames(std::vector<std::string>& names) {

    for (int i = 0; i < 10; i++) {
        std::string name;
        std::cout << "Please enter a name: ";
        std::cin >> name;
        names.push_back(name);
        std::cout << "\n";
    }
}

//takes name list and prints
void PrintNames(const std::vector<std::string>& names) {
    

    std::cout << "Names: {";
    for (int i = 0; i < names.size(); i++) {
      
        std::cout << names[i] << " ,";
    }
    std::cout << " }";
}



//remember bool has two values, true or false
bool DoesNameExist(const std::string& nameToFind, const std::vector<std::string>& names);
  


    

//write and test a function that searches for a name on the list
//return a bool value for if the name exists or not
//use the prototype


//write a function that takes name lits and prints them out
//void PrintNames(const std::vector<std::string>& names);

//write a function taking a list of names and does smething interesting
//use the function prototype for print names as a basis for this new function

