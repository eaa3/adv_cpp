#include "resource.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main() {

    try{


        Resource r("local");
        cout << "-------------------------------------------------" << endl;
        vector<Resource> resources;
        resources.push_back(r);
        cout << "-------------------------------------------------" << endl;
        resources.push_back(Resource("first"));
        cout << "-------------------------------------------------" << endl;
        throw (std::bad_exception());
        resources.push_back(Resource("second"));
        cout << "-------------------------------------------------" << endl;
        resources.push_back(Resource("third"));

    }catch(std::exception& e){
        
    }
    

    return 0;   


}