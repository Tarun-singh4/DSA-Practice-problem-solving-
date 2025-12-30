#include<iostream>
#include<vector>
using namespace std;
//lower_bound= smallest index such that arr[idx]>=x

int main(){
    vector<int> v={3,5,8,15,19};
    int n=v.size();
    int low=0,high=n-1;
    int target=4,idx=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]>=target){
            idx=mid;
            high=mid-1;}
        else{
            low=mid+1; }    }
      cout<<"answer ="<<idx;
}