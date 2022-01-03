// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

// Approach 1: Using two traversals
void sort012(int a[], int n)
    {
        int i, zero=0;
        for(i=0; i<n; i++)
            if(a[i] == 0)
                swap(a[zero++], a[i]);
        for(i=zero; i<n; i++)
            if(a[i] == 1)
                swap(a[zero++], a[i]);
    }

// Approach 2: Using single traversal
void sort012(int a[], int n)
    {
        int start = 0, mid = 0;
        int end = n - 1;
        while( mid <= end)
        {
            if(a[mid] == 0)
               swap(a[start++], a[mid++]);
            else if(a[mid] == 2)
               swap(a[mid], a[end--]);
            else
                mid++;
        }
    }

/*

  Time Complexity: O(N)
  Space Complexity: O(1)

*/