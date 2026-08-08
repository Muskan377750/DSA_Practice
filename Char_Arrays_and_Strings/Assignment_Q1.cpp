#include <iostream>
#include <string>
using namespace std;

int lowerCaseOccur(string str){
    int count = 0;
    for(char ch :str){
        if(ch=='a'||ch=='o'||ch=='e'||ch=='u'||ch=='i'){
            count++;
        }
    }
    return count;
}


int main(){
    string str;
    getline(cin,str);
    int n = lowerCaseOccur(str);
    cout<<"The number of lowercase vowel is "<<n<<endl;
    return 0;
}