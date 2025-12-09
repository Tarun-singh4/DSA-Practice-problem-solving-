#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                maxi=max(maxi,sum);
            }
        }
        cout<<maxi;
    }
};
int main(){
    vector<int> v={-2, -3, -7, -2, -10, -4};
    Solution s;
    s.maxSubArray(v);
}