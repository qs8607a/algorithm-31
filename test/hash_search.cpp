#include <vector>
#include <iostream>

#define HASH_LEN 137

using namespace std;

#include "../include/hash_search.hpp"

int main(void)
{
    int         num;
    int         value;
    vector<int> array;
    
    while (cin >> num) {
        array.push_back(num); 
        if (cin.get() == '\n')
            break;
    }

    vector<int> hash_table(HASH_LEN);
    build_hash(array, hash_table);

    cin >> value;
    
    if (hash_search(hash_table, value) == 1) {
        cout << "found" << endl;
    } else {
        cout << "no found" << endl;
    }

    return 0;
}
