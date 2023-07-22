#include <bits/stdc++.h> 

int counter(int *b,int m,int key)
{
   int start=0;
   int end = m-1;
   while(start<=end)
   {
      int mid = (start+end)/2;
      if(b[mid]== key)
      {
         if(mid!=end && b[mid+1]== key)
         {
            start = mid+1;
         }
         else
           return mid+1;
      }

      if(key>b[mid])
      {
         if(key < b[mid+1] || mid == end)
            return mid+1;
         start = mid+1;
      }
      if(key<b[mid])
      {
         end = mid-1;
      }
   }
   return 0;
}

vector < int > countSmallerOrEqual(int * a, int * b, int n, int m)
{
   vector<int> ans;
   sort(b,b+m);
   for(int i=0;i<n;i++)
   {
      int count = counter(b,m,a[i]);
      ans.push_back(count);
   }
   return ans;
}

