// Question Link : https://practice.geeksforgeeks.org/problems/maximum-index-1587115620/1

// Approach 1: TC: O(N^2) and SC: O(1)
int maxIndexDiff(int A[], int N) 
{ 
    int i=0, j=N-1, ans=0;
    while(i <= j)
    {
        if(A[i] <= A[j])
        {
            ans = max(ans, j-i);
            i++;
            j = N-1;
        }
        else 
            j--;
    }
    return ans;
}

// Approach 2: TC: O(N) and SC: O(N)
int maxIndexDiff(int A[], int N) 
{ 
    int *Lmin = new int [N];
    int *Rmax = new int [N];
    
    int i, j, maxDiff = -1;
    
    // stores min value from left to right
    Lmin[0] = A[0];
    for(i=1; i<N; i++) {
        Lmin[i] = min(Lmin[i-1], A[i]);
    }
    
    // stores maximum value from right to left
    Rmax[N-1] = A[N-1];
    for(i=N-2; i>=0; i--) {
        Rmax[i] = max(Rmax[i+1], A[i]);
    }
    
    // finding optimum j-i by traversing both arrays
    // from left to right (similar to merge of mergeSort)
    i=0, j=0;
    while(i<N && j<N)
    {
        if(Lmin[i] <= Rmax[j]) {
            maxDiff = max(maxDiff, j-i);
            j++;
        }
        else 
            i++;
    }
    
    // free memory
    delete Lmin;
    delete Rmax;
    
    return maxDiff;
}