#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    int *p = new int;
    *p = 5;
    cout << *p << endl;
    delete p;

    double *arr = NULL;
    arr = new double[20];
    delete [] arr;

    cout << sizeof(long long unsigned int) << endl;
    cout << sizeof(*arr) << endl;

    srand(time(0));

    for(int i=0; i<5; i++)
        cout << rand() << endl;

    return 0;
}