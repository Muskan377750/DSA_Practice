#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str1[100];
    char str2[100] = " Hello";
    char str3[100] = " Hello";
    strcpy(str1,str2);
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<strcat(str1,str2)<<endl;
    cout<<strcmp(str1,str2)<<endl;
    cout<<strcmp(str2,str3)<<endl;
    cout<<strcmp(str2,str1)<<endl;
    return 0;
}