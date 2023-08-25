#include <string>
#ifndef _PERSON_H
#define _PERSON_H

#include "resource.h"
#include <memory>

class Person
{
private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;
    std::unique_ptr<Resource> pResource;

    // make copy and assignment 
    // (comment and uncoment those two lines to see the difference in errors)
    // Person(const Person&);
    // Person& operator=(const Person&);

public:

    Person(std::string first, std::string last, int arbitrary);

    Person(const Person& p);
    Person& operator=(const Person& p);

    std::string GetName() const;
    int GetNumber() const { return arbitrarynumber; }
    void SetNumber(int number) { arbitrarynumber = number; }
    void SetFirstName(std::string first) { firstname = first; }

    void SetResource(std::string resourcename);

    std::string GetResourceName() const { return pResource->GetName(); }

};

#endif // _PERSON_H