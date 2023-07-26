long getMaximumProfit(long *values, int n)
{
    long min = values[0];
    long max = 0;

    for(int i=0;i<n;i++)
    {
        if(min>values[i])
        {
            min=values[i];
        }       

        if(min<values[i])
        {
            max+=values[i]-min;
            min = values[i];
        }   
    }
    return max;
}