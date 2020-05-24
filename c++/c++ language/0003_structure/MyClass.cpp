#include "MyClass.h"
#include <iostream>

using namespace std;

MyClass::MyClass()
{
    cout << "hello" << endl;
}

MyClass::~MyClass()
{
    cout << "bye" << endl;
}

void MyClass::myPrint()
{
    cout << "print print print" << endl;
}