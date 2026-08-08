#include <iostream>
#include <cstring>
using namespace std;
void lowerCase(char str[], int n){
    for(int i=0; i<n; i++){
        if(str[i]>='a'&&str[i]<='z'){
            continue;
        }else{
            char ch = str[i];
            str[i] = ch-'A'+'a';
        }
    }
}

int main(){
    char word[] = "HeLlO";
    lowerCase(word,strlen(word));
    cout<<word<<endl;
    return 0;
}