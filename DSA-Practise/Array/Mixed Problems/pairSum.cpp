
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   sort(arr.begin(),arr.end());
   vector<vector<int>> ans;

   for(int i=0;i<arr.size()-1;i++)
   {   
      for(int j= i+1;j<arr.size();j++)
      {
         if(arr[i]+arr[j]==s)
         {
            vector<int> temp;
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            ans.push_back(temp);
         }
      }
   }

   return ans;
}
