int calculateMinPatforms(int at[], int dt[], int n) {
    int result=1;
    int platNeeded=1;
    int i=1,j=0;

    sort(at,at+n);
    sort(dt,dt+n);

    while(i<n&&j<n)
    {
        if(at[i]<=dt[j])
        {
           platNeeded++;
           i++;
        }
        else if(at[i]>dt[j])
        {
           platNeeded--;
           j++;
        }
        result=max(result,platNeeded);
    }
    return result;
}