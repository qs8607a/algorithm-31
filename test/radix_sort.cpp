#include <iostream>
#include <vector>

using namespace std;

#include "../include/radix_sort.hpp"

int main(void)
{
    vector<int> array;
    int         num;

    cout << "Before sort:\n";
    while (cin >> num) {
        array.push_back(num); 
        if (cin.get() == '\n')
            break;
    }

    radix_sort(array, array.size());
    
    cout << "\nAfter sort:\n";
    print(array);

    return 0;
}

