#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int maxArea(vector<int> &height){
    int left = 0, right = height.size()-1;
    int maxWater = 0;
    while(left<right){
        int width = right - left;
        int h = min(height[left],height[right]);
        int area = width*h;
        maxWater = max(area,maxWater);
        if(height[left]<height[right]){
            left++;
        }else{
            right--;
        }
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,1};
    int ans = maxArea(height);
    cout<<"The maximum area of the container can be "<<ans<<endl;
    return 0;
}