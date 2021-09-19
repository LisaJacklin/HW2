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
    int nickles;
    int dimes;
 
    int quarters;


    int halfdol;
  

    int largc;



    std::cout << "Enter how many coins you have \n";
    std::cout << "Pennies: ";
    std::cin >> pennies;


    std::cout << "Nickles: ";
    std::cin >> nickles;
    int n = nickles * 5;

    std::cout << "dimes: ";
    std::cin >> dimes;
    int d = dimes * 10;

    std::cout << "quarters: ";
    std::cin >> quarters;
    int q = quarters * 25;

    std::cout << "half dollar: ";
    std::cin >> halfdol;
    int hd = halfdol * 50;

    std::cout << "dollar coins: ";
    std::cin >> largc;
    int l = largc * 100;


    if (pennies = 1) {
        std::cout << " You have 1 penny";
    }
    else if (pennies > 1) {
        std::cout << "You have : "; pennies; "pennies";
    }

    if (nickles = 1) {
        std::cout << " You have 1 nickle";
    }
    else if (nickles > 1) {
        std::cout << " You have :"; nickles; "nickles";
    }

    if (dimes = 1) {
        std::cout << " You have 1 dime";
    }
    else if (dimes > 1) {
        std::cout << " You have :"; dimes; "dimes";
    }

    if (quarters = 1) {
        std::cout << " You have 1 quarter";
    }
    else if (quarters > 1) {
        std::cout << " You have :"; quarters; "quarters";
    }

    if (halfdol = 1) {
        std::cout << " You have 1 half dollar";
    }
    else if (halfdol > 1) {
        std::cout << " You have :"; halfdol; "half dollars";
    }

    if (largc = 1) {
        std::cout << " You have 1 dollar coin";
    }
    else if (largc > 1) {
        std::cout << " You have :"; largc; "dollar coins";
    }


    std::cout << " You have a total of: ";
    float cents = pennies + d + q + hd + l;
    std::cout << cents;
 
  
}

//update it once completed to be gramerically correct
// 1 dime not 1 dimes, etc.