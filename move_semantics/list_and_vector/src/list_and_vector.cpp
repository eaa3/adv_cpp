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
using std::string;

template <typename T>
void exercise(int size, string commmoname){
    
    T v;
    typename T::value_type res1("starting entry");

    v.push_back(res1);

    for(int i = 0; i < size; i++){

        int r = rand();
        string s; 
        int ss = r % 100;
        std::generate_n(std::back_inserter(s), ss, [ss](){ return (char) ('a' + ss/2); });
        
        typename T::value_type res(s);
        bool inserted = false;
        for(auto it = begin(v); it != end(v); it++){
            
            if(*it > res){
                v.insert(it, res);
                inserted = true;
                break;
            }
        }

        if(!inserted) 
            v.push_back(res);

        
    }

    auto it1 = max_element(begin(v), end(v));
    typename T::value_type maxV = *it1;

    cout << "max element in " << commmoname << ": " << maxV.GetName() << endl;

    auto it2 = min_element(begin(v), end(v));
    typename T::value_type minV = *it2;

    cout << "min element in " << commmoname << ": " << minV.GetName() << endl;

    bool sorted = is_sorted(begin(v), end(v));

    cout << "the " << commmoname << " is ";

    if (!sorted)
        cout << " not ";

    cout << "sorted." << endl;

}

int main() {

    const int size = 10000;
    cout << "Running vector and list of " << size << " elements" << endl;

    // start time
    std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();

    exercise< vector<Resource>> (size, "vector");

    // end time
    std::chrono::steady_clock::time_point end_time = std::chrono::steady_clock::now();
    

    //gets time elapsed in nanoseconds (for better resolution) and converts to milliseconds
    auto time_elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count()*1e-6;
    cout << "Vector time (ms): " << time_elapsed << "[ms]" << endl;


    //-----

    start_time = std::chrono::steady_clock::now();

    exercise< list<Resource>> (size, "list");

    // end time
    end_time = std::chrono::steady_clock::now();
    

    //gets time elapsed in nanoseconds (for better resolution) and converts to milliseconds
    time_elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count()*1e-6;
    cout << "List time (ms): " << time_elapsed << "[ms]" << endl;
  
    return 0;   


}