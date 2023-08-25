#include "person.h"
#include <iostream>

using std::string;

Person::Person(string first, string last, 
                int arbitrary) : firstname(first), lastname(last), 
                arbitrarynumber(arbitrary) {

}

Person::Person(const Person& p) : firstname(p.firstname),  lastname(p.lastname), 
                                arbitrarynumber(p.arbitrarynumber) 
{

    pResource.reset(new Resource(p.GetResourceName()));

}
Person& Person::operator=(const Person& p){

    firstname = p.firstname;
    lastname = p.lastname;
    arbitrarynumber = p.arbitrarynumber;

    pResource.reset(new Resource(p.GetResourceName()));

    return *this;

}

string Person::GetName() const {

    return firstname + " " + lastname;
}


void Person::SetResource(string resourcename){

    pResource.reset(new Resource(resourcename));
}

