#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> ans;
    unordered_map<int,int>mp;

    for(auto x:arr)
        mp[x]++;
    for(auto itr:mp)
    {
        if(itr.second>(arr.size()/3))
           ans.push_back(itr.first);
    }
    return ans;

}