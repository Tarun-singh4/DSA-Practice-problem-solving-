#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    int brute(vector<int>& nums){
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int sec=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]!=nums[n-1]){
                sec=nums[i];
                break;
            }
        }
        return sec;
    }

    int better(vector<int>& nums){
        int lar=INT_MIN;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            lar=max(lar,nums[i]);
        }
        int sec=-1;
        for(int i=0;i<n;i++){
            if(nums[i]!=lar){
                sec=max(sec,nums[i]);
            }
        }
        return sec;
    }

    int optimal(vector<int>& nums){
        int n=nums.size();
        int lar=nums[0];
        int sec=-1;
        for(int i=0;i<n;i++){
            if(nums[i]>lar){
                sec=lar;
                lar=nums[i];
            }else if(nums[i]<lar && nums[i]>sec) sec=nums[i];
        }
        return sec;
    }
};
int main(){
    vector<int> v={1,3,59,92,98,3,95};
    solution s;
    cout<<"second largest element"<<" =" <<s.brute(v)<<endl;
    cout<<"second largest element"<<" =" <<s.better(v)<<endl;
    cout<<"second largest element"<<" ="<<s.optimal(v)<<"\n";
}