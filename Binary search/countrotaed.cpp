#include<iostream>
#include<vector>
using namespace std;

int findKRotation(vector<int> &nums)  {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[low]<=nums[high]) return low;
            else if(nums[low]<=nums[mid]) low=mid+1;
            else high=mid-1;
        }
        return low;
}
int main(){
    vector<int> v={3,4,5,1,2};
    int ans=findKRotation(v);
    cout<<"answer ="<<ans<<endl;
    cout<<"minimum ="<<v[ans];
}