#include <iostream>
using namespace std;

int main(){
    int matrix[3][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12}};
    cout<<matrix<<" = "<<&matrix[0][0]<<endl;
    cout<<matrix+1<<" != "<<&matrix[0][1]<<endl;
    cout<<matrix+1<<" = "<<&matrix[1][0]<<endl;
    return 0;
}