#include <bits/stdc++.h> 
using namespace std;
int kadane(int arr[],int row)
{
	int sum=0,maxSum=INT_MIN;

	for(int i=0;i<row;i++)
	{
		if(sum<0)
		{
			sum=0;
		}
	    sum +=arr[i];
		if(sum>maxSum)
		{
			maxSum=sum;
		}
	}
	return maxSum;
}

int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
   int maxSum= INT_MIN;
   int left,right;
   int temp[n],sum;

   for(left=0;left<m;left++)
   {
	   memset(temp,0,sizeof(temp));
	   for(right=left;right<m;right++)
	   {
		   for(int i=0;i<n;i++)
		       temp[i]+=arr[i][right];

		   sum = kadane(temp,n);

		   if(sum>maxSum)
			   maxSum=sum;
	   }
   }
   return maxSum;
}
