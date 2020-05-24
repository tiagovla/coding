#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream MyFile;
    MyFile.open("text.txt");

    MyFile << "Some text. \n";

    MyFile.close();

    return 0;
}