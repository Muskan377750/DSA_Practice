#include <iostream>
#include <vector>
using namespace std;

void rotate2DMatrix(vector<vector<int>>&matrix){
    int n = matrix.size();

    for(int i=0; i<n; i++){
        for(int j=i+1;j<n; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n/2; j++){
        swap(matrix[i][j],matrix[i][n-j-1]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> original = {{1,2,3},
                                    {4,5,6},
                                    {7,8,9}};
    rotate2DMatrix(original);
    return 0;
}