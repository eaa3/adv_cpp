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
    Resource pResource;

public:

    Person(std::string first, std::string last, int arbitrary);


    std::string GetName() const;
    int GetNumber() const { return arbitrarynumber; }
    void SetNumber(int number) { arbitrarynumber = number; }
    void SetFirstName(std::string first) { firstname = first; }

    void SetResource(std::string resourcename);

    std::string GetResourceName() const { return pResource.GetName(); }

};

#endif // _PERSON_H