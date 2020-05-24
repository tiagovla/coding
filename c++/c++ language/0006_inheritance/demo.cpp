#include <iostream>

using namespace std;

class Mother{
    public:
    Mother(){};
    
    void sayHi(){
        cout << "Hi";
    }
};

class Daughter : public Mother
{
    public:
    Daughter(){}
};

int main(){
    cout << "Inheritance Example" << endl;
    Mother mother;
    mother.sayHi();
    Daughter daughter;
    daughter.sayHi();

    return 0;
}