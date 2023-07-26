#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    int mx=1;
    int count =1;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]==arr[i])
           continue;
        
        if(arr[i]-arr[i-1]==1)
        {
            count++;
            mx= max(mx,count);
        }
        else
          count=1; 
    }
    return mx;
}