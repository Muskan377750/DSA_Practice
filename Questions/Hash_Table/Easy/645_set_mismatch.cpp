#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> findErrorNums(vector<int> & nums){
    int duplicate = -1;
    int missing = -1;
    for(int num: nums){
    int index = abs(num)-1;
    if(nums[index]<0){
        duplicate = abs(num);
    }else{
        nums[index] = -nums[index];
    }
    }
    for(int i=0; i<nums.size();i++){
        if(nums[i]>0){
            missing = i+1;
            break;
        }
    }
    return {duplicate,missing};
}

int main(){
    vector<int> arr = {1,1};
    vector<int> ans = findErrorNums(arr);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}   