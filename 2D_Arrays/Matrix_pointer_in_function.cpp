#include <iostream>
using namespace std;
template<int ROWS, int COLS>
 
void func1(int (&arr)[ROWS][COLS]){ //using template
    cout<<"0th row ptr "<< arr <<endl;
    cout<<"1th row ptr "<< arr+1 <<endl;
    cout<<"2nd row ptr "<< arr+2 <<endl;
}

void func2(int arr[][4], int n){ //using columns
    cout<<"0th row value "<< *arr <<endl;
    cout<<"1th row value "<< *(arr+1) <<endl;
    cout<<"2nd row value "<< *(arr+2) <<endl;
}

void func3(int (*arr)[4]){ // help of pointer
    cout<<"arr[1][3] = "<<*(*(arr+1)+3)<<endl;
}

int main(){
    int arr[3][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12}};
    func1(arr);
    func2(arr,4);
    func3(arr);
    return 0;
}