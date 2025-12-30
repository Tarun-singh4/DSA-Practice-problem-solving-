#include<iostream>
#include<vector>
using namespace std;
class Solution{
public: 
    int brute(vector<int>& nums){
        int n=nums.size();
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]) cnt++;
            }
            if(cnt==1) return nums[i];
        }
        return -1;
    }
    int better(vector<int>& nums){
        int n=nums.size();
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>maxi) maxi=nums[i];
        }
        vector<int> hash(maxi+1,0);
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(int j=0;j<maxi;j++){
            if(hash[j]==1) return j;
        }
        return -1;
    }
};
int main(){
    vector<int> v={1,1,2,2,9,10,10,5,5};
    Solution s;
    cout<<s.brute(v)<<endl;
    cout<<s.better(v)<<endl;
}