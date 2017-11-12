#include "mystring.h"

unsigned int MyString::obj_count = 0;

MyString::MyString(const char *arr) {

    length = strlen(arr) + 1;
    chPtr = new char[length];
    strcpy(chPtr, arr);

    cout << chPtr << "\\constructor #" << ++obj_count << endl;

}

MyString::~MyString(){

    cout << chPtr << "\\destructor #" << obj_count-- << endl;

    delete [] chPtr;
}




