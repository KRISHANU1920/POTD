// Question Link : https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

// My Solution
int maxLen(vector<int>&A, int n)
{   
    vector<int> preSum(n);
    
    // calulate prefix sum array
    preSum[0] = A[0];
    for(int i=1; i<n; i++)
        preSum[i] = preSum[i-1] + A[i];
    
    unordered_map<int, int> ump;
    ump[0] = -1;
    ump[preSum[0]] = 1;
    int maxLen = 0, currLen = 0;
    
    for(int i=1; i<n; i++)
    {
        if(ump[preSum[i]])
        {
            currLen = preSum[i] ? (i - ump[preSum[i]] + 1) : i+1;
            maxLen = max(maxLen, currLen);
        }
        else
            ump[preSum[i]] = i+1;
    }
    
    return maxLen;
}

// Editorial Solution
int maxLen(vector<int>&A, int n)
{
    // Map to store the previous sums
    map<int, int> p;
    int sum = 0; // Initialize the sum of elements
    int len = 0; // Initialize result

    for (int i = 0; i < n; i++)
    {
        // Add current element to sum
        sum += A[i];
        if(A[i] == 0 and len == 0)
            len = 1;
        if(sum == 0)
            len = i + 1;

        // Look for this sum in Hash table
        if (p.find(sum) != p.end())
        {
            // If this sum is seen before, then update max_len
            len = max(len, i - p[sum]);
        }
        else
        {
            // Else insert this sum with index in hash table
            p[sum] = i;
        }
    }
    return len;
}

/*

Time Complexity: O(N)
Space Complexity: O(N)

*/