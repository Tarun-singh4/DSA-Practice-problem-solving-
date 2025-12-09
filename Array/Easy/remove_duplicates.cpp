#include<iostream>
#include <set>
#include<vector>
using namespace std;

class Solution{
public:
    int brute(vector<int>& nums){
        set<int> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int idx=0;
        for(auto it:st){
            nums[idx]=it;
            idx++;
        }
        return idx;
    }

    int optimal(vector<int>& nums){
        int n=nums.size();
        int j=0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[j]){
                nums[j+1]=nums[i];
                j++;
            }
        }
        return j+1;
    }

    void display(vector<int>& num,int k){
    for(int i=0;i<k;i++){
        cout<<num[i]<<"  ";
    }
}
};
int main(){
    vector<int>  v={1,2,3,4,4,4,4,8};
    Solution s;
    int k=s.brute(v);
    s.display(v,k);
}