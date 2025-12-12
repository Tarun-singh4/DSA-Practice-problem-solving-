#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    vector<int> brute(vector<int>& nums1,vector<int>& nums2){
        vector<int> vis(nums2.size(),0);
        vector<int> result;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j] && vis[j]==0){
                    result.push_back(nums1[i]);
                    vis[j]=1;
                    break;
                }
                if(nums1[i]<nums2[j]) break;
            }
        }
        return result;
    }
    vector<int> optimal(vector<int>& v1,vector<int>& v2){
        int i=0,j=0;
        vector<int> intersection;
        while(i<v1.size() && j<v2.size()){
            if(v1[i]==v2[j]){
                intersection.push_back(v1[i]);
                i++;
                j++;
            }else if(v1[i]>v2[j]){
                j++;
            }else{
                i++;
            }
        }
        return intersection;
    }
};
int main(){
    vector<int> v1={1,4,4,7,9,10,78,79};
    vector<int> v2={4,4,10,45,67,79};
    Solution s;
    vector<int> res=s.brute(v1,v2);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"  ";
    }
    cout<<endl;
    vector<int> result=s.optimal(v1,v2);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"  ";
    }
    
}