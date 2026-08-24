#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int>& arr,int target){
    for(int i=0; i<arr.size(); i++){
        for(int j= i+1; j<arr.size(); j++){
           if(arr[i]+arr[j]==target){
            return {i+1,j+1};
           }
        }
    }\
    return {};
}

int main(){
    vector<int> vec ={11,7,2,15};
    int target = 9;
    vector<int> vec1 = pairSum(vec,target);
    cout<<vec1[0]<<endl;
    cout<<vec1[1]<<endl;
    return 0;
}