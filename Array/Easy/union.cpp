#include<iostream>
#include<vector>
#include<set>
using namespace std;
//union of two sorted arrays
class Solution{
public:
    vector<int> brute(vector<int> v1,vector<int> v2){
        set<int> st;
        for(int i=0;i<v1.size();i++){
            st.insert(v1[i]);
        }
        for(int j=0;j<v2.size();j++)
             st.insert(v2[j]);
        vector<int> result;
        for(auto it:st){
            result.push_back(it);
        }
        return result;
    }

    vector<int> optimal(vector<int>& v1,vector<int> v2){
        vector<int> Union;
        int i=0,j=0;
        while(i<v1.size() && j<v2.size()){
            if(v1[i]<=v2[j]){
                if(Union.size()==0 || Union.back()!=v1[i])
                    Union.push_back(v1[i]);
                i++;
            }
            else{
                if(Union.size()==0 || Union.back()!=v2[j])
                    Union.push_back(v2[j]);
                j++;
            }
        }
        while(i<v1.size()){
            if(Union.size()==0 || Union.back()!=v1[i])
                    Union.push_back(v1[i]);
            i++;
        }
        while(j<v2.size()){
             if(Union.size()==0 || Union.back()!=v2[j])
                    Union.push_back(v2[j]);
            j++;
        }
        return Union;
    }
};
int main(){
    vector<int> v1={1,4,6,7};
    vector<int> v2={1,3,5,7,9,98};
    Solution s;
    vector<int> r=s.brute(v1,v2);
    vector<int> res=s.optimal(v1,v2);
    for(int i=0;i<r.size();i++) cout<<r[i]<<" ";
    cout<<endl;
    for(int i=0;i<res.size();i++) cout<<r[i]<<" ";
}