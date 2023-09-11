#include "resource.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;


Resource::Resource(std::string n) : name(n) {

    cout << "Constructing " << name << endl;
}
Resource::Resource(const Resource& r) : name(r.name) {

    cout << "copy constructing " << name << endl;

}


Resource& Resource::operator=(const Resource& r){

    //if class contained Resources,
    //check for self assignment
    //cleanup existing resources
    //before setting new values

    name = r.GetName();

    cout << "copy assignment " << name << endl;

    return *this;
}

Resource::Resource(Resource&& r) : name(std::move(r.name)) {

    cout << "move constructing " << name << endl;

}


Resource& Resource::operator=(Resource&& r){

    //if class contained Resources,
    //check for self assignment
    //cleanup existing resources
    //before setting new values

    if( this != &r ){
        name = std::move(r.name);
        r.name.clear();
    }

    cout << "move assignment " << name << endl;

    return *this;
}

Resource::~Resource(void){

    cout << "destructing " << name << endl;
}
