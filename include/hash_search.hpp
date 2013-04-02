#ifndef HASH_SEARCH_HPP
#define HASH_SEARCH_HPP

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

#endif

