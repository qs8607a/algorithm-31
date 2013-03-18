#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

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
