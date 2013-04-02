#ifndef BINARY_SEARCH_HPP
#define BINARY_SEARCH_HPP

int binary_search(vector<int> array, int value)
{
    int low = 0;
    int high = array.size() - 1;

    sort(array.begin(), array.end());

    while (low <= high) {
        int mid = (low + high) / 2;

        if (array[mid] == value) {
            return mid; 
        } else if (array[mid] > value) {
            high = mid - 1; 
        } else {
            low = mid + 1; 
        }
    }
    
    return -1;
}

#endif

