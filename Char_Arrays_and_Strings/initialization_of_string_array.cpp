#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char str[] ="Hello";
    char str2[6] = "Hello";
    char str3[] = {'H','e','l','l','o','\0'};
    char str4[6] = {'H','e','l','l','o','\0'};
    cout<<str<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    cout<<str4<<endl;
    cout<<strlen(str3)<<endl;
    return 0;
}