#include<iostream>
#include<vector>
using namespace std;
//floor  -largest no.<=x

int main(){
    vector<int> v={3,5,8,15,19};
    int n=v.size();
    int low=0,high=n-1;
    int target=17,idx=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]<=target){
            idx=mid;
            low=mid+1;}
        else{
            high=mid-1; }    }
      cout<<"answer ="<<v[idx];
}