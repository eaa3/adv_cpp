#include <iostream>

using namespace std;

int main() {

    // manual allocation with new
    int *a = new int;

    *a = 42;

    cout << "Number: " << *a << endl;

    // remember to release resource
    delete a;

    return 0;
}