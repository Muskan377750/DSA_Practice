#include <iostream>
#include <cstring>
using namespace std;

bool validPalindrome(char str[],int n){
    int st = 0, end = n-1;
    while(st<end){
        if(str[st++]!=str[end--]){
            return false;
        }
    }
      return true;
}

int main(){
    char str[] = "apple";
    if(validPalindrome(str,strlen(str))){
        cout<<"The given word is palindrome!";
    }else{
    cout<<"The given word is not palindrome!";
    }
    return 0;
}
