#include <iostream>
using namespace std;

void DecimalToBinary(int n){
    string binary = "";
    int num = n;
    if(n==0) binary = "0";
    while(num!=0){
        if(num%2==0){
            binary = binary + '0';
        }else{
            binary = binary + '1';
        }
        num/=2;
    }
    cout<<"Binary Number is "<<binary<<endl;
}

int main(){
    int number = 15;
    DecimalToBinary(number);
    return 0;
}