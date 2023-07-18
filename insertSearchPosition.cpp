int bSearch(vector<int>& arr,int key)
{
	int start = 0;
	int end = arr.size() -1;
	int mid;

	while(start<=end)
	{
		mid = (start+end)/2;

		if(key < arr[mid])
		{
			end = mid-1;
		}
		else if(key > arr[mid])
		{
			start = mid+1;
		}
		if(mid == end)
		{
			return mid+1;
		}
		
	}
	return mid;
}

int searchInsert(vector<int>& arr, int m)
{
	int ans = bSearch(arr,m);
	return ans;

}
