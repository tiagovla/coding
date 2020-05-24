#include<iostream>

using namespace std;


template <class T>
T sum(T a, T b){
    return a+b;
}

int main(){
    int x=5, y=10;
    cout << sum(x,y) << endl;

    return 0;
}