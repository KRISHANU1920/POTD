// Question Link : https://practice.geeksforgeeks.org/problems/sort-by-absolute-difference-1587115621/1

int key;
class Solution {
    public:
    // A[]: input array
    // N: size of array
    //Function to sort the array according to difference with given number.

    bool static comparator(int a, int b)
    {
        if(abs(key-a) < abs(key-b))
            return true;
        else
            return false;
        
    }
    void sortABS(int A[],int N, int k)
    {
       key = k;
       stable_sort(A, A+N, comparator);
    }
};

/*

Note: Stable_sort() uses Merge Sort by default and maintains stability (guaranteed)
      sort() uses Intro Sort by default and may maintain stability (not confirm)

Time Complexity: O(N.log(N))
Space Complexity: O(N)

*/