#include "resource.h"
#include <vector>
#include <list>
#include <random>
#include <iostream>
#include <algorithm>
#include <chrono>

using std::vector;
using std::list;
using std::cout;
using std::endl;

using std::string;


int main() {

    Resource r("local");


    cout << "-------------------------------------------------------------" << endl;

    vector<Resource> resources;

    resources.push_back(r);

    cout << "-------------------------------------------------------------" << endl;

    resources.push_back(Resource("first"));

    std::for_each(begin(resources), end(resources),
                    [](const Resource& res) { cout << res.GetName() << endl; }
                    );

    cout << endl;


    return 0;   


}