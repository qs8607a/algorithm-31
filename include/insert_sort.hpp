#ifndef INSERT_SORT_HPP
#define INSERT_SORT_HPP

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

#endif


