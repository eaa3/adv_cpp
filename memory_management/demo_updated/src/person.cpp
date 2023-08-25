#include "person.h"
#include <iostream>

using std::string;

Person::Person(string first, string last, 
                int arbitrary) : firstname(first), lastname(last), 
                arbitrarynumber(arbitrary) {

}

string Person::GetName() const {

    return firstname + " " + lastname;
}


void Person::SetResource(string resourcename){

    pResource = std::make_shared<Resource>(resourcename);
}

