#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    int brute(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return nums[n-1];
    }
    
    int optimal(vector<int>& nums){
        int largest=nums[0];
        for(int i=0;i<nums.size();i++){
            largest=max(largest,nums[i]);
        }
        return largest;
    }
};
int main(){
    vector<int> v={1,3,59,92,98,3};
    solution s;
    cout<<"largest element"<<" =" <<s.brute(v)<<endl;
    cout<<"largest element"<<" ="<<s.optimal(v)<<endl;
}