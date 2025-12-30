#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int firstoccur(vector<int> &nums,int target){
        int n=nums.size();
        int low=0,high=n-1,ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }else if(target>nums[mid]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
    

    int lastoccur(vector<int> &nums,int target){
        int n=nums.size();
        int low=0,high=n-1,ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                low=mid+1;
            }else if(target>nums[mid]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};
int main(){
    vector<int> v={3, 4, 13, 13, 13, 20, 40};
    Solution s;
    int first=s.firstoccur(v,13);
    int last=s.lastoccur(v,13);

    cout<<"first occurence ="<<first<<endl; 
    cout<<"last occurence ="<<last<<endl;  
    cout<<"No. of occurence ="<<last-first+1;
}