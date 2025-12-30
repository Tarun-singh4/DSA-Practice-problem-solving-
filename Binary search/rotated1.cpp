#include<iostream>
#include<vector>
using namespace std;

//Search in rotated sorted array -1(unique elements)
int rotated(vector<int> &v,int target){
    int n=v.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==target){
            return mid;
        }
        //left sorted array
        else if(v[low]<=v[mid]){
            if(v[low]<=target && target<=v[mid]){
                high=mid-1;
            }else low=mid+1;
        }
        //right sorted array
        else{
            if(v[mid]<=target && target<=v[high]){
                low=mid+1;
            }else high=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> v={6,7,8,9,10,1,2,3,4,5};
    int ans=rotated(v,2);
    cout<<"Answer ="<<ans;
}