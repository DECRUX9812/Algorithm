#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i) 
{
   int temp;
   int largest = i;
   int l = 2 * i + 1;
   int r = 2 * i + 2;

   if (l < n && arr[l] > arr[largest])
   {
     largest = l;
   }
   if (r < n && arr[r] > arr[largest])
   {
     largest = r;
   }
   if (largest != i) 
   {
      temp = arr[i];
      arr[i] = arr[largest];
      arr[largest] = temp;
      heapify(arr, n, largest);
   }
}
void heapSort(int arr[], int n) 
{
   int temp;
   
   for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
   
   for (int i = n - 1; i >= 0; i--)
   {
      temp = arr[0];
      arr[0] = arr[i];
      arr[i] = temp;
      heapify(arr, i, 0);
   }


   cout<<"Sorting..........................................." << endl;
}
int main() 
{
   int arr[] = { 20, 7, 1, 54, 10, 15, 90, 23, 77, 25};
   int x;
   int i;
   cout<<"Size of the arrsy?:"<<endl;
   cin>>x;
   cout<<"Enter array:"<<endl;
   for(int i=0;i<x;i++)
   {
       cin>>arr[i];
   }
   cout<<endl;
   heapSort(arr, x);
   cout<<"Sorted array is:"<< endl;
   for (i = 0; i < x; ++i)
   {
    cout<<arr[i]<<" ";
   }
  return 0;
}