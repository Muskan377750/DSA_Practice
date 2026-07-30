#include <iostream>
using namespace std;

void BinaryToDecimal(string Binary){
    int num = 0;
    int n = Binary.size();
    int pow = 1;
    for(int i=n-1; i>=0; i--){
        if(Binary[i]=='1'){
            num+=pow;
        }
        pow*=2;
    }
    cout<<num<<endl;
}

int main(){
    string Binary = "100101101";
    BinaryToDecimal(Binary);
    return 0;
}