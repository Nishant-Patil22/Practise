#include <bits/stdc++.h> 
#include <iostream>

using namespace std;
int maxSumAfterFlip(int *arr,int n)
{
    int curSum=arr[0];
    int maxSum=arr[0];
    for(int i=1;i<n;i++)
    {
       curSum =max(arr[i],curSum+arr[i]);
       maxSum =max(curSum,maxSum); 
    }
    return max(maxSum,0);
}

int flipBits(int *arr,int n)
{
   int count =0;
   for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            arr[i]= -1;
            count++;
        }
        else
        {
            arr[i]=1;
        }
    }
    int sum = maxSumAfterFlip(arr, n);
    return sum+count;
}
