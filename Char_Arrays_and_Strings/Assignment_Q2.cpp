#include <iostream>
#include <string>
using namespace std;

bool isEqual(string s1, string s2){
    if(s1.length()!=s2.length()) return false;
    int diff = 0; 
    char d1,d2;
    for(int i=0; i<s1.length(); i++){
        if(s1[i]!=s2[i]){
            if(!diff){
            d1 = s1[i];
            d2 = s2[i];
            }else if(s1[i]!=d2||s2[i]!=d1){
                return false;
            }
            diff++;
        }  
         if(diff>2){
            return false;
          } 
    }
    if(diff==1){
        return false;
    }
   return true;
}

int main(){
    string s1 = "Hollo";
    string s2 = "oellH";
    if(isEqual(s1,s2)){
        cout<<"Both the strings are same after swapping 2 indexes.";
    }else{
        cout<<"Both the strings are not same after swapping 2 indexes.";
    }
    
    return 0;
}