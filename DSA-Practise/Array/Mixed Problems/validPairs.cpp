
#include <iostream>

using namespace std;

#include <bits/stdc++.h>
bool isValidPair(vector<int> &arr, int n, int k, int m)
{

    if(n%2!=0)
       return false;
    
    unordered_map<int,int> mp;
    
    for(int i=0;i<n;i++)
        mp[arr[i]%k]++;
    
    for(auto itr: mp)
    {
        int a = itr.first;
        int b = (m-a+k)%k;
        if(mp[b]!= mp[a])
           return false;
    }
    return true;
}