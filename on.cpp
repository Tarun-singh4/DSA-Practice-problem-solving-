#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(4,0);
    v.push_back(2);  //0(1)
    v.emplace_back(5); //0(1)
    v.pop_back();  //0(1)
    sort(v.begin(),v.end());  //0(nlogn)
    v.push_back(4);
    cout<<v.back();
    //v.end() ->pointer just after last element
}