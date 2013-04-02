#ifndef SOUNDEX_HPP
#define SOUNDEX_HPP

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

#endif
