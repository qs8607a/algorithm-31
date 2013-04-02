#include <iostream>
#include <vector>

using namespace std;

#include "../include/shell_sort.hpp"

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

    shell_sort(array, array.size());

    cout << "\nAfter sort:\n";
    print(array);

    return 0;
}
