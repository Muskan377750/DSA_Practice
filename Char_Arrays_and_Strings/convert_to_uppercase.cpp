#include <iostream>
#include <cstring>
using namespace std;

void upperCase(char str[], int n){
    for(int i=0; i<n; i++){
        char ch = str[i];
        if(ch>='A'&&ch<='Z'){
           continue;
        }else{
           str[i] = ch-'a'+'A';
        }
    }
    cout<<str<<endl;
}

int main(){
    char str[] = "ApPle";
       upperCase(str,strlen(str));
    return 0;
}