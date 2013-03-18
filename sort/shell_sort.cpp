#include <iostream>
#include <vector>

using namespace std;

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

int main(int argc, char *argv[])
{
    vector<int> array;
    int         num;

    cout << "Before sort:\n";
    while (cin >> num) {
        array.push_back(num);
        if (cin.get() == '\n')
            break;
    }

    shell_sort(array, array.size());

    cout << "\nAfter sort:\n";
    print(array);

    return 0;
}
