#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
   int firstLarg=INT_MIN,secondLarg=INT_MIN;

   for(int i=0;i<n;i++)
   {
       if(arr[i]>firstLarg)
       {
           secondLarg = firstLarg;
           firstLarg = arr[i];
       }

       if(arr[i]>secondLarg && arr[i]<firstLarg)
       {
           secondLarg=arr[i];
       } 
   }

   if(secondLarg==INT_MIN)
        return -1;
   else
       return secondLarg;
}