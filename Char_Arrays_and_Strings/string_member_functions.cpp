#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "I love coding in c++ and c++ included python also.";
    cout<<str.length()<<endl;
    cout<<str.at(2)<<endl;
    cout<<str.substr(2,4)<<endl;
    int idx1 = str.find("c++");
    cout<<idx1<<endl;
    int idx2 = str.find("Net");
    cout<<idx2<<endl;
    int idx3 = str.find("c++",20);
    cout<<idx3<<endl;
    return 0;
}