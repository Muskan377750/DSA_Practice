#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> &arr, int target){
        int currSum = 0;
        int st = 0, end = arr.size()-1;
        while(st<end){
            currSum = arr[st]+arr[end];
            if(currSum==target){
                return {st+1,end+1};
            }else if(currSum>target){
                end--;
            }else{
                st++;
            }
        }
        return {};
}

int main(){
    vector<int>arr = {1,2,3,4};
    int target = 6;
    vector<int> ans = pairSum(arr,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}