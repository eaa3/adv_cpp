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
using std::begin;
using std::end;
using std::max_element;

int main() {

    const int size = 10000;
    cout << "Running vector and list of " << size << " elements" << endl;

    // start time
    std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();

    vector<int> v;
    v.push_back(0);

    for(int i = 0; i < size; i++){

        int r = rand();
        bool inserted = false;
        for(auto it = begin(v); it != end(v); it++){
            
            if(*it > r){
                v.insert(it, r);
                inserted = true;
                break;
            }
        }

        if(!inserted) 
            v.push_back(r);

        
    }

    auto it1 = max_element(begin(v), end(v));
    int m1 = *it1;

    // end time
    std::chrono::steady_clock::time_point end_time = std::chrono::steady_clock::now();
    

    //gets time elapsed in nanoseconds (for better resolution) and converts to milliseconds
    auto time_elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count()*1e-6;
    cout << "Vector time (ms): " << time_elapsed << "[ms]" << endl;

    start_time = std::chrono::steady_clock::now();

    // list
    list<int> l;
    l.push_back(0);

    for(int i = 0; i < size; i++){

        int r = rand();
        bool inserted = false;
        for(auto it = begin(l); it != end(l); it++){
            
            if(*it > r){
                l.insert(it, r);
                inserted = true;
                break;
            }
        }

        if(!inserted) 
            l.push_back(r);

        
    }

    auto it2 = max_element(begin(l), end(l));
    int m2 = *it2;

    // end time
    end_time = std::chrono::steady_clock::now();
    

    //gets time elapsed in nanoseconds (for better resolution) and converts to milliseconds
    time_elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count()*1e-6;
    cout << "List time (ms): " << time_elapsed << "[ms]" << endl;

    return 0;   


}