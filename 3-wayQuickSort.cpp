#include <bits/stdc++.h> 
void DutchNationalFlag(vector<int> &arr,int left,int right,int &i,int &j)
{
    int pivot= arr[right];
    int mid= left;
    if(right-left <= 1)
    {
        if(arr[left]>arr[right])
           swap(arr[left],arr[right]);
        i=left;
        j=right;   
        return; 
    }
    while(mid<=right)
    {
        if(arr[mid]<pivot)
        {
            swap(arr[left++],arr[mid++]);
        }
        else if(arr[mid]>pivot)
        {
            swap(arr[mid],arr[right--]);
        }
        else if(arr[mid]==pivot)
        {
            mid++;
        }
        i=left-1;
        j=mid;
        
    }

}
void QuickSort(vector<int> &arr,int left,int right)
{
    if(left>=right)
        return;
    int i,j;
    DutchNationalFlag(arr,left,right,i,j);

    QuickSort(arr,left,i);
    QuickSort(arr,j,right);
}

vector<int> quickSortUsingDutchNationalFlag(vector<int> &arr)
{
   int start=0;
   int end = arr.size()-1;
   QuickSort(arr,start,end);
   return arr;
}
