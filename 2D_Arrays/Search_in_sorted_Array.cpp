// We use stair case in interviews.
// T.C:- O(n+m)

#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

bool Search(int mat[ROWS][COLS],int key){
    int i=0, j=COLS-1;
    while(i<ROWS && j>=0){
        if(key==mat[i][j]){
            cout<<"Found at cell ("<<i<<","<<j<<")\n";
            return true;
        }else if(key>mat[i][j]){
            i++;
        }else{
            j--;
        }
    }
    cout<<"Value not found!"<<endl;
    return false;
}

int main(){
    int matrix[ROWS][COLS] = {{10,20,30,40},
                              {12,21,31,41},
                              {14,24,33,45}};
    Search(matrix,10);
    return 0;
}