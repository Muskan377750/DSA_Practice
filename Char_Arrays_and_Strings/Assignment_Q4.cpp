#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool validParentheses(string s){
    if(s.size()%2!=0) return false;

    vector<char>v;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='{'||s[i]=='['||s[i]=='('){
            v.push_back(s[i]);
        }else{
            if(v.size()>0){
                if(s[i]==']'&&v.back()=='['){
                    v.pop_back();
                }else if(s[i]=='}'&&v.back()=='{'){
                    v.pop_back();
                }else if(s[i]==')'&&v.back()=='('){
                    v.pop_back();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
    if(v.size()==0){
        return true;
    }else{
        return false;
    }
}

int main(){
    string s = "({[]})]";
    if(validParentheses(s)){
        cout<<"The parentheses are valid."<<endl;
    }else{
        cout<<"The parentheses are not valid."<<endl;
    }
    return 0;
}