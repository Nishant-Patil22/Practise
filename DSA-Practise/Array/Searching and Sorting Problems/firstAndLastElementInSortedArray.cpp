
int lastOccurence(vector<int> &arr,int x)
{
    int size= arr.size();
    int start =0;
    int end = size-1;
    int last=-1;
    
    while(start<=end)
    {
        int mid = (start+end) /2;
        if(arr[mid]==x)
        {
            last = mid;
            start = mid+1;
        }
        else if(x > arr[mid])
        {
            start = mid+1;
        }
        else if(x < arr[mid])
        {
            end = mid-1;
        }
    }
    
    return last;
}

int firstOccurence(vector<int> &arr,int x)
{
    int size= arr.size();
    int start =0;
    int end = size-1;
    int first=-1;
    
    while(start<=end)
    {
        int mid = (start+end) /2;;
        if(arr[mid]==x)
        {
            first = mid;
            end = mid-1;
        }
        else if(x > arr[mid])
        {
            start = mid+1;
        }
        else if(x < arr[mid])
        {
            end = mid-1;
        }
    }
    
    return first;
}

vector<int> searchRange(vector<int> &arr, int x)
{
	vector<int> ans;
    ans.push_back(firstOccurence(arr,x));
    ans.push_back(lastOccurence(arr,x));
    return ans;
}

