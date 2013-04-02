#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP

void print_sort(vector<int> array)
{
    for (vector<int>::iterator p = array.begin(); p != array.end(); p++) {
        cout << *p << " ";
    }
    cout << "\n";
}

int adjust_array(vector<int> &array, int l, int r)
{
    int i = l;
    int j = r;
    int x = array[i];
    
    while (i < j) {
        while (i < j && array[j] >= x)
            j--;
        if (i < j) {
            array[i] = array[j];
            i++;
        }
        
        while (i < j && array[i] < x)
            i++;
        if (i < j) {
            array[j] = array[i];
            j--;
        }
    }
    array[i] = x;
    return i;
}

int random_adjust_array(vector<int> &array, int l, int r)
{
    srand(time(NULL));
    
    int i = rand() % (r-l+1) + l;
    int x;
    x= array[i];
    cout << x << " | ";
    array[i] = array[l];
    array[l] = x;
    return adjust_array(array, l, r);
}

void quick_sort(vector<int> array, int l, int r)
{
    if (l < r) {
        int i = adjust_array(array, l, r);
        print_sort(array);
        quick_sort(array, l, i - 1);
        quick_sort(array, i + 1, r);
    }
}

void random_quick_sort(vector<int> &array, int l, int r)
{
    if (l < r) {
        int i = random_adjust_array(array, l, r);
        print_sort(array);
        random_quick_sort(array, l, i - 1);
        random_quick_sort(array, i + 1, r);
    }
}

#endif

