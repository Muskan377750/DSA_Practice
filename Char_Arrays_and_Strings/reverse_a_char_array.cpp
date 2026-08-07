#include <iostream>
#include <cstring>
using namespace std;

void reverseWord(char str[], int n){
    int st = 0;
    int end = n-1;
    while(st<end){
        swap(str[st++],str[end--]);
    }
}

int main(){
    char word[] = "code";
    reverseWord(word,strlen(word));
    cout<<"Reverse = "<<word<<endl;
    return 0;
}