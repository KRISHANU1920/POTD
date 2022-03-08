// Question Link : https://practice.geeksforgeeks.org/problems/number-is-sparse-or-not-1587115620/1

// Approach 1: TC- O(Log2(N)) and SC- O(1)
bool isSparse(int n)
{
    int prevRem = 0;
    while(n > 0)
    {
        int currRem = n % 2;
        
        if(currRem && prevRem)
            return false;
        
        prevRem = currRem;
        n /= 2;
    }
    return true;
}


// Approach 2: TC- O(1) and SC- O(1)
bool isSparse(int n)
{
    // n is not sparse if there is set
    // in AND of n and n/2
    if(n & (n >> 1))
        return false;
        
    return true;
}