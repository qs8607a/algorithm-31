#ifndef HEAP_SORT_HPP
#define HEAP_SORT_HPP

void print_sort(vector<int> array)
{
    for (vector<int>::iterator p = array.begin(); p != array.end(); p++)
        cout << *p << " ";
    cout << "\n";
}

void heap_adjust(vector<int> &array, int i, int size)
{
    int lchild = 2 * i;
    int rchild = 2 * i + 1;
    int max = i;
    if (i <= size / 2) {
        if (lchild <= size && array[lchild] > array[max]) {
            max = lchild; 
        }
        if (rchild <= size && array[rchild] > array[max]) {
            max = rchild; 
        }
        if (max != i) {
            swap(array[i], array[max]);
            heap_adjust(array, max, size);
        }
    }
}

void build_heap(vector<int> &array, int size)
{
    int i;
    for (i = size / 2; i >= 1; i--)
        heap_adjust(array, i, size);
}

void heap_sort(vector<int> &array, int size)
{
    int i;
    build_heap(array, size);
    for (i = size; i >= 1; i--) {
        swap(array[1], array[i]);
        heap_adjust(array, 1, i - 1);
        print_sort(array);
    }
}

#endif


