// Question Link: https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1

// Approach 1: Binary Search

bool findPair(int arr[], int size, int n){
    sort(arr, arr+size);
    for(int i=0; i<size-1; i++)
    {
        int x = n + arr[i];
        int l = i+1, r = size-1;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(arr[mid] == x)
                return true;
            else if(arr[mid] < x)
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    return false;
}

/*

Time Complexity: O(NlogN)
Space Complexity: O(1)

*/


// Approach 2: Two Pointers

bool findPair(int arr[], int size, int n){
    sort(arr, arr + size);
    int i = 0, j = 1;
    while( i < size-1)
    {
        if(arr[j]-arr[i] == n)
            return true;
        else if(arr[j]-arr[i] > n)
            i++;
        else
            j++;
    }
    return false;
}

/*

Time Complexity: O(NlogN)
Space Complexity: O(1)

*/