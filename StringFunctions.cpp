# include <iostream>
# include <cstring>
using namespace std;

int main () {
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10];
    int len;

    // copy strl into strl3
    strcpy(str3, str1);
    cout << "strcpy(str1, str2) : " << str3 << endl;

    // concatenate str1 and str2
    strcat ( str1, str2);
    cout << "strcat (str1, str2) : " << str1 << endl;

    // total length of str1 afer concatenation
    len = strlen (str1);
    cout << "strlen(str1) : " << len << endl;
return 0;
}