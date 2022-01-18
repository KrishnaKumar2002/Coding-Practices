#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n)
{
     if (n==1)
     {
         return ;
     }

for (int i=0;i<n-1;i++)
if (arr[i]>arr[i+1])
    swap(arr[i] , arr[i+1]);

bubblesort(arr,  n-1);
}
  void printarr(int arr[], int n)
  {
  for(int i=0 ;i<n; i++)
   cout<<arr[i] ;
    printf("\n");
    }
int main()
{
    int arr[] { 24 , 65 , 31, 55, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, n);
    printf("the sorted array is ");
    printarr(arr,n);
     return 0;
}
