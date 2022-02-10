// Question Link : https://practice.geeksforgeeks.org/problems/b6b3297ccfb1ad5f66a9c2b92979170417adf114/1

int transfigure (string A, string B)
{
    int check = 0, count = 0, n = A.size();
    // if string length are not equal
    if(A.size() != B.size())
        return -1;
    // checking whether both string have same characters
    for(int i=0; i<n; i++)
    {
        check += A[i];
        check -= B[i];
    }
    if(check != 0)
        return -1;
    
    // counting steps for transfigure
    int i=n-1, j=n-1; 
    while(i>=0 && j>=0)
    {
        if(A[i] != B[j]) {
            count++;
            i--;
        }
        else {
            i--;
            j--;
        }
    }
    return count;
}

/*

Time Complexity: O(n)
Space Complexity: O(1)

*/