#include <iostream>
#include <string.h>
using namespace std;

int main(){
    // Ist method
    char word[30];
    cin>>word;
    cout<<"Your word was: "<<word<<endl;
    cout<<"Length: "<<strlen(word)<<endl;
    // 2nd method
    char sentence[30];
    cin.getline(sentence,30);
    cout<<"Your sentence is : "<<sentence<<endl;
    cout<<"Length :"<<strlen(sentence)<<endl;
    // 3rd method
    char sentence[30];
    cin.getline(sentence,30,'.');//any special character *, ., @
    cout<<"Your sentence is : "<<sentence<<endl;
    cout<<"Length :"<<strlen(sentence)<<endl;
    return 0;
}