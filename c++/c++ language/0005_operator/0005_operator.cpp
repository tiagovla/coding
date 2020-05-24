#include <iostream>

using namespace std;


class Int{
    private:
        int value;
    public:
        Int(){}

        Int(int a)
        :value(a){}

        int get(){
            return this->value;
        }

        void set(int val){
            this->value = val; 
        }

        Int operator+(Int &obj){
            Int result;
            result.value = this->value + obj.value;
            return result;
        }

};


int main(){
    Int a(3);
    Int b(4);
    Int res;
    res = a+b;
    cout << res.get() << endl;
    //cout << res.value << endl;

    return 0;
}