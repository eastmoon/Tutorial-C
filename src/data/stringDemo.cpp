#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void stringIsCharArray() {
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "Greeting message: ";
    cout << greeting << endl;
}

void stringFunctionByChar() {
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10];
    int  len ;

    // copy str1 into str3
    strcpy( str3, str1);
    cout << "strcpy( str3, str1 )\t: " << str3 << endl;

    // concatenates str1 and str2
    strcat( str1, str2);
    cout << "strcat( str1, str2 )\t: " << str1 << endl;

    // total lenghth of str1 after concatenation
    len = strlen(str1);
    cout << "strlen( str1 )\t\t: " << len << endl;
}

void stringFunctionByStringClass() {
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int  len ;

    // copy str1 into str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;

    // concatenates str1 and str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;

    // total length of str3 after concatenation
    len = str3.size();
    cout << "str3.size() :  " << len << endl;
}
void stringDemo() {
    stringIsCharArray();
    cout << "\n";
    stringFunctionByChar();
    cout << "\n";
    stringFunctionByStringClass();
}
