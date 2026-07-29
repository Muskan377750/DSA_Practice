#include <iostream>
using namespace std;

void sumOfRow(int (*arr)[3],int i, int m){
    int sum = 0;
    for(int j=0; j<m; j++){
        sum+=(*(*(arr+(i-1))+j));
    }
    cout<<"Sum of all the elements of "<<i<<"nd row is "<<sum<<endl;
}

int main(){
    int nums[3][3] = {{1,4,9},
                      {11,4,3},
                      {2,2,3}};
    sumOfRow(nums,2,3);
    return 0;
}