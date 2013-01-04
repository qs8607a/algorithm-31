#include <vector>
#include <iostream>

#define HASH_LEN 137

using namespace std;

void build_hash(vector<int> &array, vector<int> &hash_table)
{
    vector<int>::iterator p;

    for (p = array.begin(); p < array.end(); p++) {
        int hash_address = *p % HASH_LEN;

        while (hash_table.at(hash_address) != 0) {
            hash_address = (++hash_address) % HASH_LEN;
        }

        hash_table.at(hash_address) = *p;
    }
}

int hash_search(vector<int> &hash_table, int value)
{
    int hash_address = value % HASH_LEN;

    while (hash_table.at(hash_address) != 0 && 
           hash_table.at(hash_address) != value) {
        hash_address = (++hash_address) % HASH_LEN;
    }
    
    if (hash_table.at(hash_address) == 0)
        return -1;

    return 1;
}

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
