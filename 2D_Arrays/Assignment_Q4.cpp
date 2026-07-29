#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> construct2dMatrix(vector<int>& original, int m, int n){
    if(original.size()!=m*n) return {};

    vector<vector<int>> ans(m, vector<int>(n));

    for(int i=0; i<original.size(); i++){
        ans[i/n][i%n] = original[i];
    }
    return ans;
}

int main(){
   vector<int> original={1,2,3};
    int m = 1;
    int n=3;
   vector<vector<int>> ans = construct2dMatrix(original,m,n);
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;
}