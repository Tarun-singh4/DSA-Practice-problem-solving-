#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    void brute(vector<int>& nums){
        int n=nums.size(),i=0,cnt=0;
        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                nums[i]=nums[j];
                i++;
                cnt++;
            }
        }
        for(int i=cnt;i<n;i++){
            nums[i]=0;
        }

    }
    void optimal(vector<int>& nums){
    int j = 0;  // position for non-zero
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

};
int main(){
    vector<int> v={1,0,3,1,0,0,2,3};
    Solution s;
    s.optimal(v);
    s.brute(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
}