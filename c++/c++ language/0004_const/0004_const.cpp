#include <iostream>

using namespace std;

class MyClass{
    public:
    MyClass(int a, int b)
    : regVar(a), constVar(b)
    {
        
    }
    private:
        int regVar;
        const int constVar;
};


int main(){
    MyClass obj = MyClass(1,2);

    return 0;
}