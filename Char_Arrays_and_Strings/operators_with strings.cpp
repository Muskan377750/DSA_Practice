#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "cat";
    string str2 = "cat";
    string str3 = "dog";
    cout<<(str1==str2)<<endl;
    cout<<(str1!=str2)<<endl;
    cout<<(str1<str3)<<endl;
    cout<<(str1>str3)<<endl;
    return 0;
}