#include <bits/stdc++.h>
using namespace std;
void sort012(int *arr, int n)
{
   int low=0;
   int mid=0;
   int high= n-1;
   
   while(mid<=high)
   {
      if(arr[mid]==0)
      {
         swap(arr[low],arr[mid]);
         low+=1;
         mid+=1;
      }
      else if(arr[mid]==1)
      {
         mid+=1;
      }
      else 
      {
         swap(arr[mid],arr[high]);
         high-=1;
      }
   }
}

int main()
{
    int arr[] = {0 ,1, 2, 2, 1, 0};
    int size = sizeof(arr)/sizeof(int);
    sort012(arr,size);
    for(auto itr: arr)
       cout<<itr<<" ";
    
}
