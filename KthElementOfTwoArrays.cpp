//Easy and Simple Approach || Time Complexity : O((n+m)log (n+m))

//Used if we sort using qsort function
//   int compare(const void *a, const void *b)
//     {
//       int *x = (int *)a;
//       int *y = (int *)b;
//       return *x - *y;
//     }

class Solution{
    public:
    
    
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int l=n+m;
        int arr3[l];
        for(int i=0;i<n;i++)
        arr3[i]=arr1[i];
        
        for(int i=0;i<m;i++)
        arr3[n+i]=arr2[i];
        
        sort(arr3,arr3+l);    //qsort(arr3, l, sizeof(int), compare); 
        
        return arr3[k-1];
    }
};