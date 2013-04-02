#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

#include "../include/quick_sort.hpp"

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
    
    random_quick_sort(array, 0, array.size() - 1);
    
    cout << "\nAfter sort:\n";
    print_sort(array);
    
    return 0;
}
