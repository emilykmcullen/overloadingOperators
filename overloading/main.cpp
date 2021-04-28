//
//  main.cpp
//  overloading
//
//  Created by Emily Cullen on 28/04/2021.
//

#include <iostream>
#include "Person.hpp"

int main(int argc, const char * argv[]) {
    Person p1("Kate", "Gregory", 123);
    Person p2("Emily", "Cullen", 456);
    
    //overloaded operator 1
    std::cout << "p1 is ";
    if (!(p1 < p2))
        std::cout << "not ";
    std::cout << "less than p2" << std::endl;
    
    //overloaded operator 2
    std::cout << "p1 is ";
    if(!(p1 < 300))
        std::cout << "not ";
    std::cout << "less than 300" << std::endl;
    
    //overloaded operator 3
    std::cout << "300 is ";
    if(!(300 < p1))
        std::cout << "not ";
    std::cout << "less than p1" << std::endl;
    
    return 0;
}
