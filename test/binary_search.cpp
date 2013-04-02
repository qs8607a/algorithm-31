#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

#include "../include/binary_search.hpp" 

int main(void)
{
    vector<int> array;
    int         num;
    int         value;
    
    while (cin >> num) {
        array.push_back(num);
        if (cin.get() == '\n')
            break;
    }
    
    cin >> value;

    if (binary_search(array, value) != -1)
        cout << "found" << endl;
    else
        cout << "no found" << endl;

    return 0;
}
