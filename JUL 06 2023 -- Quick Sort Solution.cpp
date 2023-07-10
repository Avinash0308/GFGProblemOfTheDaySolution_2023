class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high){
            int part = partition(arr,low,high);
            quickSort(arr,low,part-1);
            quickSort(arr,part+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot = arr[low];
       int i = low+1, j = high;
       do{
           while(arr[i]<=pivot && i<=high){
               i++;
           }
           while(arr[j]>pivot && j>=low){
               j--;
           }
           if(i<j){
               swap(arr[i],arr[j]);
           }
       }while(i<j);
       swap(arr[j],arr[low]);
       return j;
    }
};
