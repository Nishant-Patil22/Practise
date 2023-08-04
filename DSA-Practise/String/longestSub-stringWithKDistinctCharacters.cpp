#include <bits/stdc++.h> 
int getLengthofLongestSubstring(string s, int k) {
    int i=0;
    int j=0;
    int ans=INT_MIN;
    map<char,int>mp;

    while(j<s.size())
    {
        mp[s[j]]++;
        while(mp.size()>k)
        {
            mp[s[i]]--;
            if(mp[s[i]]==0)
              mp.erase(s[i]);
            i++;
        }
        if(mp.size()<=k)
           ans = max(ans,j-i+1);
        j++;
    }
    return ans;
}