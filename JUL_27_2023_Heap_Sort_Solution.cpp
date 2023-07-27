#include<bits/stdc++.h>
using namespace std;
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
        // Your Code Here]
        int cur_lar = i;
        int left = 2*i + 1;
        int right = 2*(i+1);
        if(left < n && arr[left] > arr[cur_lar]){
            cur_lar = left;
        }
        if(right < n && arr[right] > arr[cur_lar]){
            cur_lar = right;
        }
        if(cur_lar == i) return;
        swap(arr[i],arr[cur_lar]);
        heapify(arr,n,cur_lar);
    }
    
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    // Your Code Here
        for(int i = ( n/2 )- 1; i>=0; i--){
            heapify(arr,n,i);
        }
        for(int i = n-1; i>0; i--){
            swap(arr[i],arr[0]);
            heapify(arr,i,0);
        }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        //code here
        buildHeap(arr,n);
    }
};