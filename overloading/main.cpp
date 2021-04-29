//
//  main.cpp
//  overloading
//
//  Created by Emily Cullen on 28/04/2021.
//

#include <iostream>
#include "Person.hpp"

template <class T>
T myMax(T const& t1, T const& t2){
    return t1 < t2 ? t2 : t1;
    
};

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
    
    //USING MAX TEMPLATE FUNCTION
    std::cout << "Max of 33 and 44 is " << myMax(33, 44) << std::endl;
    
    std::string s1 = "Hello";
    std::string s2 = "World";
    //these will be sorted alphabetically, because 'w' is further
    //down the alphabet than 'h', world will be bigger
    std::cout << "Max of hello and world is " << myMax(s1, s2) << std::endl;
    
    //this one will use an overloaded operator from
    //the person class! so it will compare the arbitrary numbers
    //as we did there
    std::cout << "Max of person 1 and person 2 is " << myMax(p1, p2).GetName() << std::endl;
    
    return 0;
}
