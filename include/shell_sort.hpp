#ifndef SHELL_SORT_HPP
#define SHELL_SORT_HPP

void print(vector<int> array)
{
    for (vector<int>::iterator p = array.begin(); p != array.end(); p++)
        cout << *p << " "; 
    cout << "\n";
}

void shell_sort(vector<int> &array, vector<int>::size_type N)
{
    vector<int>::size_type step, i, j;

    for (step = N / 2; step > 0; step /= 2) {
        for (i = step; i < N; i++) {
            vector<int>::size_type temp = array[i];
            for (j = i; j >= step; j -= step) {
                if (temp < array[j - step])
                    array[j] = array[j - step];
                else 
                    break;
            }
            array[j] = temp;
            print(array);
        }
    }
}

#endif

