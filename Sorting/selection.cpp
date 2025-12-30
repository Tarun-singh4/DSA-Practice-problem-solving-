#include<iostream>
#include<vector>
using namespace std;

void selection(vector<int>& nums){
    int last=nums.size()-1;
    int curr,walker,smallest;
    curr=0;
    while(curr<last){
        smallest=curr;
        walker=curr+1;
        while(walker<=last){
            if(nums[walker]<nums[curr]){
                smallest=walker;
            }
            walker++;
        }
        int temp=nums[curr];
        nums[curr]=nums[smallest];
        nums[smallest]=temp;

        curr++;
    }
}