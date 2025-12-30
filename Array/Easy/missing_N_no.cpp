#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    int brute(vector<int> nums){
        int n=nums.size();
        for(int i=1;i<=n+1;i++){
            int flag=0;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    flag=1;
                    break;
                }
            }
            if(flag==0) return i;
        }
        return -1;
    }

    int better(vector<int>& nums){
        int n=nums.size();
        vector<int> hash(n+2,0);
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(hash[i]==0) return i;
        }
        return -1;
    }
};
int main(){
    vector<int> v={2,3,4,5};
    Solution s;
    cout<<s.brute(v)<<endl;
    cout<<s.better(v)<<endl;
}