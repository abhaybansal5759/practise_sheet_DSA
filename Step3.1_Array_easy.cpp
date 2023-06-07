#include<bits/stdc++.h>
// -----------------------------------Largest Element in Array-------------------------------------------------
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
    
      int largestnumber = arr[0];  // Variable to store the largest number
        for (int i = 1; i < n; i++) {
            if (arr[i] > largestnumber) {
                largestnumber = arr[i];
            }
        }
        return largestnumber;
    }
};
------------------------------------------------Second Largest --------------------------------------------
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	     int largest = -1;
        int secLargest = -1;
        
        for(int i=0; i<n; i++){
            if(arr[i] > largest){
                secLargest =largest;
                largest = arr[i]; // example of 12, 35, 1, 10, 34, 1
            }
            else if(arr[i] > secLargest && arr[i] != largest){
                secLargest = arr[i]; // example of 10,5,10
            }
        }
        return secLargest;
	   }
};

// ----------------------------------Check if array is sorted -------------------------------------------
class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
       for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true;
    }
};

************ Leetcode solution *************
class Solution {
public:
    bool check(vector<int>& nums) {
        int count =0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0])
        count++;
        return count <= 1;
    }
};

-------------------------Remove duplicate elements from sorted Array----------------------------------
class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        set<int>set;
        for(int i=0;i<n;i++){
            set.insert(a[i]);
        }
        int k = set.size();
        int j=0;
        for(int itr:set){
            a[j++] = itr;
            
        }
        return k;
    }
};

*******************leetcode*******************8
lass Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>set;
    int n = nums.size();
        for(int i=0;i<n;i++){
            set.insert(nums[i]);
        }
        int k=set.size(); // it counts the number of distinct elements present in the nums vector after removing duplicates
        int j=0;
        for (auto itr = set.begin(); itr != set.end(); ++itr) {
        nums[j++] = *itr;
    }
        return k;
    }
};

// --------------------------------Quick Left Rotation ------------------------------------------
class Solution{
	public:
	
	void reverse(int arr[],int left,int right)
	{
	    while(left<=right)
	    {
	        int temp=arr[left];
	        arr[left]=arr[right];
	        arr[right]=temp;
	        left++;
	        right--;
	    }
	}
	void leftRotate(int arr[], int k, int n) 
	{ 
	    
	   // Your code goes here
	   
	   // comments for example 1 , n=7,k=2 arr[]={1,2,3,4,5,6,7}
	   
	  k=k%n; // k remain within size 
	  if(k<0)
	  {
	      k+=n;
	  } // it handle k negative value if exist 
	  reverse(arr,0,n-1); // complete array will reverse like {7,6,5,4,3,2,1}
	  reverse(arr,0,n-k-1);// reverse 0 to 4 index means arr[]={3,4,5,6,7,2,1}
	  reverse(arr,n-k,n-1); // reverse only 5 and 6 index means{1,2} and after it process is {3,4,5,6,7,1,2}
	} 
};

****************leetcode **********************

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for(int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()] = nums[i];
             //the current element nums[i] will be placed three(k=3) positions ahead in the temp vector.
        }
        nums=temp;
    }
};

-------------------------------------Move all zeroes to end of array -------------------------------------
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	     int i = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] != 0) {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
        }
    }
	}
};
***************leetcode**************
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};

// ----------------------------Searching an element in a sorted array--------------------------
public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
     for(int i=0;i<N;i++){
         if(arr[i]==K)
         return 1;
     }
     return -1;

    }

    -----------------------------------Union of Two Sorted Arrays ----------------------------------
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        
         map < int, int > freq;
  vector < int > Union;
  for (int i = 0; i < n; i++)
    freq[arr1[i]]++;
  for (int i = 0; i < m; i++)
    freq[arr2[i]]++;
  for (auto & it: freq)
    Union.push_back(it.first); // key ki value le li hai vaaki ki vale ki value ignore 
  return Union;

    }

    // -----------------------------------Missing number ----------------------------------------
    int missingNumber(int A[], int N)
{
    // Your code goes here
   int expectedSum = (N * (N + 1)) / 2; // Calculate the sum of all numbers from 1 to N 
    int actualSum = 0;

    for (int i = 0; i < N - 1; i++) {
        actualSum += A[i]; // Calculate the sum of the array elements sore in actualSum
    }
    

    return expectedSum - actualSum; 
    // it will give you the number which is missing 

    *******************leetcode*****************
    class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size(); // give the size which is in vector
    int expectedSum = (N * (N + 1)) / 2;
    int actualSum = 0;

    for (int i = 0; i < N; i++) {
        actualSum += nums[i];
        // Calculate the sum of the array elements sore in actualSum
    }

    return expectedSum - actualSum; //     // it will give you the number which is missing 

    }
};

