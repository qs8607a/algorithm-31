#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#include "../include/heap_sort.hpp"

int main(int argc, char *argv[])
{
    vector<int> array;
    int         num;

    cout << "Before sort:\n";
    while (cin >> num) {
        array.push_back(num); 
        if (cin.get() == '\n')
            break;
    }

    heap_sort(array, array.size() - 1);

    cout << "\nAfter sort:\n";
    print_sort(array);

    return 0;
}
