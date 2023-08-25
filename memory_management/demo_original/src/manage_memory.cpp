#include "person.h"

using std::string;

int main() {

    Person kate("Kate", "Gregory", 345);

    kate.SetResource("Kate resource");
    kate.SetResource("Kate second resource");

    // copy constructor
    Person kate2 = kate;

    // assingment operator
    kate = kate2;

    string s1 = kate.GetResourceName();


    return 0;


}