#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

#include "../include/insert_sort.hpp"

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

    insert_sort(array);

    cout << "\nAfter sort:\n";
    print_sort(array);

    return 0;
}
