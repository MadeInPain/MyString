#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
public:
    static unsigned int obj_count;
    unsigned int length;
    char *chPtr;

public:

    MyString(const char *);
    ~MyString();

    friend ostream & operator <<(ostream & os,  MyString & obj){
            os <<  obj.chPtr;
            return os;
    }
};

#endif // MYSTRING_H
