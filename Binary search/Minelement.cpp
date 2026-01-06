#include<iostream>
#include<vector>
using namespace std;

int mini(vector<int> &v){
    int n=v.size(),low=0;
    int high=n-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if(v[mid]>v[high]){
            low=mid+1;
        }else{
            high=mid;
        }
    }
    return low;
}
int opti(vector<int> &v){
    int low=0,high=v.size()-1;
    int ans=INT_FAST8_MAX;
    while (low<=high){
        int mid=low+(high-low)/2;
        if(v[low]<=v[mid]){
            ans=min(ans,v[low]);
            low=mid+1;
        }else{
            ans=min(ans,v[mid]);
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> v={4,5,7,9,1,2,3};
    int ans=mini(v);
    cout<<"answer"<<v[ans];
}