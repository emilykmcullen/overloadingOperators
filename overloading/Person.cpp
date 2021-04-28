//
//  Person.cpp
//  overloading
//
//  Created by Emily Cullen on 28/04/2021.
//

#include "Person.hpp"
#include <iostream>

Person::Person(std::string first, std::string last, int arbitrary) : firstName(first), lastName(last), arbitrarynumber(arbitrary) {
    std::cout << "constructing " << GetName() << std::endl;
}

Person::Person() : arbitrarynumber(0) {
    std::cout << "constructing " << GetName() << std::endl;
}

Person::~Person() {
    std::cout << "destructing " <<  GetName() << std::endl;
}

std::string Person::GetName() const {
    return firstName + " " + lastName;
}

bool Person::operator<(Person const& p) const {
        return arbitrarynumber < p.arbitrarynumber;
}

bool Person::operator<(int i) const {
    return arbitrarynumber < i;
}


//this function takes it's Person as const reference and so the function GetNumber MUST also be marked const
//if it's not we wouldn't be allowed to call the non const function on the const p 
bool operator<(int i, Person const& p){
    return i < p.arbitrarynumber;
    //if this function were not a friend of the class, it would not be able to access arbitrary number and
    //we would have to use a public getter like this: 
//    return i < p.GetNumber();
}
