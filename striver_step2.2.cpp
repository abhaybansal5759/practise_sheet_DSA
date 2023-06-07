-----------------------------------------------Merge Sort------------------------------------
 public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         vector<int>temp;
         int left = l;
         int right =m+1;
         while(left<=m && right<=r){
             if(arr[left]<=arr[right]){
                 temp.push_back(arr[left]);
                 left++;
             }
             else{
                 temp.push_back(arr[right]);
                 right++;
             }
         }
                 // if elements on the left half are still left //

             while(left<=m){
                 temp.push_back(arr[left]);
                 left++;
             }
             while(right<=r){
                 temp.push_back(arr[right]);
                 right++;
             }
             for(int i=l;i<=r;i++){
                 arr[i]=temp[i-l];
             }
         
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r) return;
        int m = (l+r)/2;
        mergeSort(arr,l,m); // left part 
        mergeSort(arr,m+1,r); // right part 
        merge(arr,l,m,r);
    }

    // -------------------------------------Bubble Sort ---------------------------------------
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

-------------------------- Insertion Sort- ---------------------------------

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

    // --------------------------------------------Quick sort ------------------------------

 public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if (low < high) {
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

        
    
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       
      int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}