#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
        This is a simple cpp code
    */
    // Some basic commands:
    cout << "Hello World\n";
    cout << "This " << "is " << "awesome!"<< endl;

    int my_variable = 420;
    //cin >> my_variable;
    cout << my_variable << endl;
    cout << my_variable++ << ++my_variable << endl;

    //if statement:
    if (1>=2) {
        cout << "Do this!" << endl;
    }else{
        cout << "Do that!" << endl;
    }

    //while loop statement:
    cout << "while loop" << endl;
    int ii = 5;
    while (--ii){
        cout << ii << endl;
    }

    //for loop statement:
    cout << "for loop:" << endl;
    for(int ii = 1, jj = 1; jj*ii<6; jj++, ii++){
        cout << jj*ii << endl;
    }

    // do while loop statement:
    cout << "do while loop:" << endl;
    int x = 2;
    do{ 
        cout << ++x << endl;
    }while(x < 10);

    // switch statement:
    cout << "switch:" << endl;
    int age = 42;
    switch(age){
        case 15:
        cout << "young af" << endl;
        break;
        case 42:
        cout << "old af" << endl;
        break;
        default:
        cout << "idk" << endl;

    }

    //data types:
    cout << "data types:" << endl;
    short unsigned int xy = 3;
    cout << xy << endl;

    string a = "this is a string";
    char var = 'z';
    bool online = true;

    cout << a << var << online << endl;

    return 0;
}