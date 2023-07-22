#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int maxSubArraySum(int a[],int size)
{
    int maxSoFar = INT_MIN, maxEndingHere=0;
    
    for(int i=0;i<size;i++)
    {
        maxEndingHere+=a[i];
        maxSoFar = max(maxEndingHere,maxSoFar);
        if(maxEndingHere<0) maxEndingHere=0;
    }
     return maxSoFar;
    
}
