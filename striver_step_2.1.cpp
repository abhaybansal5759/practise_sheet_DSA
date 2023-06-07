#include<bits/stdc++.h>

------------------------------------Selection Sort -------------------------------
public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
        
        
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for (int i=0;i<=n-1;i++){
          int mini = i;
          for(int j=i+1;j<n;j++){
            if (arr[j]<arr[mini]){
                mini=j;
            }
          }
          
          // in  above code we select the smallest element 
          
          int temp=arr[mini];
          arr[mini]=arr[i];
          arr[i]=temp; // swap program is perform here 
       }
   
       
    }

    // ---------------------------------------Bubble Sort ------------------------------------------------
     public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
        for(int i=1;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
--------------------------------------Insertion Sort ------------------------------------
 public:
    void insert(int arr[], int i)
    {
        //code here
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=1;i<n;i++){
            int temp=arr[i];
            int j=i-1;
            for(;j>=0;j--){
                if(arr[j]>temp){
                    arr[j+1]= arr[j];
                }
                else{
                    break;
                }
            }
            arr[j+1] =temp;
        }
    }
