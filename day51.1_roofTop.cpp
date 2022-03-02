// Question Link : https://practice.geeksforgeeks.org/problems/roof-top-1587115621/1

int maxStep(int A[], int N)
{
    int maxHeight = 0, currHeight = 0;
    
    if(N == 1)
        return 0;
    
    for(int i=1; i<N; i++)
    {
        if(A[i] > A[i-1]) {
            currHeight++;
            maxHeight = max(maxHeight, currHeight);
        }
        else
            currHeight = 0;
    }
    return maxHeight;
}

/*

Time Complexity: O(N)
Space Complexity: O(1)

*/