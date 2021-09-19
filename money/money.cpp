// money.cpp 
// Lisa Jacklin
// CS 203
// 9/14/2021
//

#include <iostream>
#include <string>

int main()
{
    int pennies;
    std::cout << "Enter how many coins you have, then press enter. \n";
    std::cout << "Pennies: ";
    std::cin >> pennies;

    int nickles;
    std::cout << "Nickles: ";
    std::cin >> nickles;
    int n = nickles * 5;

    int dimes;
    std::cout << "dimes: ";
    std::cin >> dimes;
    int d = dimes * 10;

    int quarters;
    std::cout << "quarters: ";
    std::cin >> quarters;
    int q = quarters * 25;

    int halfdol;
    std::cout << "half dollar: ";
    std::cin >> halfdol;
    int hd = halfdol * 50;

    int largc;
    std::cout << "dollar coins: ";
    std::cin >> largc;
    int l = largc * 100;


    if (pennies = 1) {
        std::cout << " You have 1 penny\n";
    }
     else if (pennies != 1) {
        std::cout << "You have : "; pennies; "pennies\n";
    }

    if (nickles = 1) {
        std::cout << " You have 1 nickle\n";
    }
    else if (nickles > 1) {
        std::cout << " You have :"; nickles; "nickles\n";
    }

    if (dimes = 1) {
        std::cout << " You have 1 dime\n";
    }
    else if (dimes > 1) {
        std::cout << " You have :"; dimes; "dimes\n";
    }

    if (quarters = 1) {
        std::cout << " You have 1 quarter\n";
    }
    else if (quarters > 1) {
        std::cout << " You have :"; quarters; "quarters\n";
    }

    if (halfdol = 1) {
        std::cout << " You have 1 half dollar\n";
    }
    else if (halfdol > 1) {
        std::cout << " You have :"; halfdol; "half dollars\n";
    }

    if (largc = 1) {
        std::cout << " You have 1 dollar coin\n";
    }
    else if (largc > 1) {
        std::cout << " You have :"; largc; "dollar coins\n";
    }

    float cents = pennies + d + q + hd + l;
    std::cout << " You have a total of: "; 
    std::cout << cents;
    std::cout << " cents \n";


    if (cents > 100) {
        float dollar = cents / 100;
        std::cout << "You have a total of : "; 
        std::cout << dollar;
        std::cout << " dollars";
    }
    return 0;

  /*
  * 
  */  
 
}
