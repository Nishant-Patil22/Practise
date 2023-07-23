
int *getProductArrayExceptSelf(int *arr, int n)
{
    int *ans= new int[n];
    long long temp = 1;
    int mod = 1e9+ 7;

    for(int i=0; i<n;i++) 
    {
        ans[i]=temp;
        temp = (temp * arr[i]) % mod;
    }
    temp=1;
    for(int i=n-1;i>=0;i--)
    {
        ans[i] = (ans[i]*temp) %mod;
        temp = (temp * arr[i])% mod;
    }

    return ans;

}
