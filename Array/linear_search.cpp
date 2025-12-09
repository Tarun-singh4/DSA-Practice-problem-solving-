#include<bits/stdc++.h>
using namespace std;

int linear_search(vector<int>& nums,int target){
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==target){
            return i;
        } 
    }
    return -1;
}
int main(){
    vector<int> v={2,3,4,1,89,76};
    int result=linear_search(v,89);
    if(result!=-1) cout<<"target found at index ="<<result;
    else cout<<"target not found";
}