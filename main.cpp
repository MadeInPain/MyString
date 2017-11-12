#include <iostream>
#include <mystring.h>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    MyString str("test string!");
    cout << str;
    cout << static_cast<char>(str.chPtr[4]) << "|" << endl;


    MyString str2("2"), str3(" 3 ");

    MyString bad_test = str3;


    return 0;
}
