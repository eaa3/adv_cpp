#include <vector>
#include <algorithm>
#include <iostream>


int main() {

    int x = 0;
    int y = 0;

    std::vector<int> v;

    // handy lambda the prints out the values of x and y capturing them by reference
    auto print = [&]() { std::cout << "x: " << x << " y: " << y << std::endl; };

    for(int i = 0; i < 5; i++){
        v.push_back(i);
    }

    // all by value
    // note the mutable keyword
    // A by-value capture cannot be modified in a non-mutable lambda
    std::for_each(begin(v), end(v), [=](int element) mutable { 
        x += element;
        y += element;
    });

    print();
    x = y = 0;

    // x by value, rest by ref
    std::for_each(begin(v), end(v), [&, x] (int element) mutable {
        x += element;
        y += element;
    });

    print();
    x = y = 0;

    // all by value, except for x, which is captured by reference
    std::for_each(begin(v), end(v), [=, &x] (int element) mutable {
        x += element;
        y += element;
    });

    print();
    x = y = 0;

    // all by reference
    std::for_each(begin(v), end(v), [=, &x] (int element) mutable {
        x += element;
        y += element;
    });

    print();

    // std::vector<int> doubledV(v.size());


    return 0;   


}