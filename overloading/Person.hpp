//
//  Person.hpp
//  overloading
//
//  Created by Emily Cullen on 28/04/2021.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>

class Person {
    private:
        std::string firstName;
        std::string lastName;
        int arbitrarynumber;
        
    //THIS KEYWORD FRIEND DOESNT DECLARE THE FUNCTION, IT SIMPLY SAYS "THERE IS A FUNCTION OUT THERE IN THE
    //WORLD CALLED OPERATOR LESS THAN THAT TAKES AN INTEGER AND A PERSON CONST REFERENCE, AND THAT FUNCTION
    //IS A FRIEND TO THIS CLASS, IT'S ALLOWED TO SEE THE PRIVATE MEMBER VARIABLES OF THIS CLASS"
        friend bool operator<(int i, Person const& p);
    
    public:
        Person(std::string first, std::string last, int arbitrary);
        Person();
        ~Person();
        std::string GetName() const;
        int GetNumber() const { return arbitrarynumber; }
        void SetNumber(int number) { arbitrarynumber = number; }
    
        bool operator<(Person const& p) const;
        bool operator<(int i) const;
};
//free function
bool operator<(int i, Person const& p);

#endif /* Person_hpp */
