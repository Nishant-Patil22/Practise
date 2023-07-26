#include <bits/stdc++.h> 
vector<long long> maxProductCount(vector<int> &arr, int n) {
    if(n<4)
      return {0};

    unordered_map<long long,long long>mp;
    long long max =0, ele=1e19;
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==i)
               continue;
            
            long long x = arr[i];
            x*=arr[j];
            mp[x]++;

            if(mp[x]>max)
            {
                max=mp[x];
                ele =x;
            }
            else if(mp[x]==max)
            {
                ele=min(ele,x);
            }
        }
    }
    if(max == 2)
      return {0};

    return {ele,max*(max/2-1)/4};
}