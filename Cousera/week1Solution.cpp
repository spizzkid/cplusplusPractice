// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sales_item.h"


// You should define Pair here:
// (Use as many lines as you need!)
// ...
// ...
class Pair {
public :
    int a, b;
    int sum() {
        return this->a + this->b;
    }
};

// This main() function will help you test your work.
// Click Run to see what happens.
// When you're sure you're finished, click Submit for grading
// with our additional hidden tests.
int main() {
    Pair p;
    p.a = 100;
    p.b = 200;
    if (p.a + p.b == p.sum()) {
        std::cout << "Success!" << std::endl;
    }
    else {
        std::cout << "p.sum() returns " << p.sum() << " instead of " << (p.a + p.b) << std::endl;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
