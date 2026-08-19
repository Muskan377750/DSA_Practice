#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec1;
    cout<<"The size of vec1 is "<<vec1.size()<<endl;
    vector<int>vec2={1,2,3,4};
    cout<<"The size of vec2 is "<<vec2.size()<<endl;
    vector<int>vec3(10,-1);
    cout<<"The size of vec3 is "<<vec3.size()<<endl;
    for(int i=0; i<vec3.size(); i++){
        cout<<vec3[i]<<" ";
    }
    return 0;
}