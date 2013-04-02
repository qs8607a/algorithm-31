#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

#include "../include/soundex.hpp"

int main(int argc, char *argv[])
{
    string test1, test2;
    cin >> test1 >> test2;
    string code1 = soundex(test1);
    string code2 = soundex(test2);
    cout << "soundex for " << test1 << " is " << code1 << endl;
    cout << "soundex for " << test2 << " is " << code2 << endl;
    return 0;
}

