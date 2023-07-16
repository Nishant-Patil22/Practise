#include <iostream>
#include <vector>
using namespace std;

long long kadans(vector<int> &arr)
{
    long long max = arr[0], crsum = arr[0];
    long long n= arr.size();
    for(int i=1;i<n;i++)
    {
        if(crsum>0) crsum+=arr[i];
        else crsum = arr[i];
        if(crsum>max)
           max=crsum;
    }
    return max;
}

long long kadanstwo(vector<int> &arr)
{
    long long n = arr.size();
    vector<int> v1;
    for(int i=0;i<n;i++) v1.push_back(arr[i]);
    for(int i=0;i<n;i++) v1.push_back(arr[i]);
    return (kadans(v1));
}

long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
    long long sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    if(k==1) return kadans(arr);

    else if(sum<0) return kadanstwo(arr);

    else return kadanstwo(arr)+(k-2)*sum;
}
