#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

void print_sort(vector<int> array)
{
    for (vector<int>::iterator p = array.begin(); p != array.end(); p++) {
        cout << *p << " ";
    }
    cout << "\n";
}

void insert_sort(vector<int> &array)
{
    int i, j;

    for (i = 1; i < array.size(); i++) {
        int temp = array[i];

        for (j = i - 1; j >= 0 && array[j] > temp; j--) {
            array[j + 1]  = array[j];
        }
        array[j + 1] = temp;
        print_sort(array);
    }
}

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
