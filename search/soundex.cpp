#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

char encode(char c)
{
    if ((c == 'B') || (c == 'F') || (c == 'P') || (c == 'V'))
        return '1';
    if ((c == 'C') || (c == 'G') || (c == 'J') || (c == 'K') ||
        (c == 'Q') || (c == 'S') || (c == 'X') || (c == 'Z'))
        return '2';
    if ((c == 'D') || (c == 'T'))
        return '3';
    if ((c == 'M') || (c == 'N'))
        return '5';
    if ((c == 'R'))
        return '6';
    if ((c == 'L'))
        return '4';
    return '0';
}

string soundex(const string str)
{
    string code = "0000";
    int i = 0, j = 1;
    char tmp;
    code[i] = str[i];
    
    for (i = 1; i < str.length(); i++){
        tmp = toupper(str[i]);
        if (encode(tmp) != '0') {
            code[j++] = encode(tmp);
        }
    }
    return code;
}

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

