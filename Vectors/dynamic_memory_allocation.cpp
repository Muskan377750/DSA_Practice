#include <iostream>
using namespace std;

void funcInt(){
    int *ptr = new int;
    *ptr = 5;
    cout<<*ptr<<endl;
    delete ptr;// free memory
}

void func(){
    int *ptr = new int[5];
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    for(int i=0; i<5; i++){
        cout<<ptr[i]<<endl;
    }
    delete [] ptr; // free memory
}

int main(){
    funcInt();
    func();
    return 0;
}