#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums){
    int n=nums.size();
    int temp=nums[0];
    for(int i=1;i<n;i++){
        nums[i-1]=nums[i];
    }
    nums[n-1]=temp;
}
void display(vector<int>& num){
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<"  ";
    }
}
int main(){
    vector<int> v={1,2,3,4,5};
    rotate(v);
    display(v);

}