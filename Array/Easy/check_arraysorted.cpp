#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& nums){
    int n=nums.size();
    for(int i=1;i<n;i++){
        if(nums[i-1]>nums[i]) return false;
    }
    return true;
}
int main(){
    vector<int> v={1,2,2};
    cout<<check(v);
}