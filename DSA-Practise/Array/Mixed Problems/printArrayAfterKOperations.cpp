#include <bits/stdc++.h> 
vector<int> printArrayAfterKOperations(vector<int> &Arr, int N, int K) {	
	
	if(K==0)
	   return Arr;

	int times;

    if(K%2==0)
	   times=2;
	else times=1;

	for(int i=0;i<times;i++)
	{
		int maxi=Arr[0];
	    for(int i=0;i<N;i++)
	    {
		   if(Arr[i]>maxi)
		      maxi=Arr[i];
	    }
        for(int i=0;i<N;i++)
	    {
		   Arr[i]=maxi-Arr[i];
	    }
	}
	return Arr;
}
