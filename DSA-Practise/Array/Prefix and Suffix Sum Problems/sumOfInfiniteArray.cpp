int mod = 1e9+7;

long long sumArr(vector<long long> &sumArray,long long x,long long n)
{
    long long count = (x/n)% mod;

    long long result = (count * sumArray[(int) n])% mod;

    result = (result + sumArray[(int)(x%n)])% mod;

    return result;
}


vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    vector<int> ans;
    
    vector<long long> sumArray(n+1);

    for(int i=1;i<=n;i++)
    {
        sumArray[i] = ((arr[i-1] + sumArray[i-1])% mod);
    }

    for(int i=0;i<q;i++)
    {
        
        long long left = queries[i][0];
        long long right = queries[i][1];

        long long rsum = sumArr(sumArray,right,n);
        long long lsum = sumArr(sumArray,left-1,n);

        ans.push_back((int)((rsum-lsum+mod)%mod));
    }
    return ans;
}
