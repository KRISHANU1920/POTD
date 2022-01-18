// Question Link : https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

// Approach 1: using Prefix sum and Suffix sum

class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
    
        long long preSum[n], sufSum[n];
        preSum[0] = a[0];
        sufSum[n-1] = a[n-1];
        for(int i=1; i<n; i++)
           preSum[i] = a[i] + preSum[i-1];
        for(int i=n-2; i>=0; i--)
            sufSum[i] = a[i] + sufSum[i+1];
        for(int i=0; i<n; i++)
            if(preSum[i] == sufSum[i])
                return i+1;
        return -1;
    }
};

/*

Time Complexity: O(N)
Space Complexity: O(N)

*/

// Approach 2: using Prefix sum and Total sum

class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
    
        int sum = 0, leftSum = 0;
        for(int i=0; i<n; i++)
            sum += a[i];
        for(int i=0; i<n; i++)
        {
            sum -= a[i];
            if(leftSum == sum)
                return i+1;
            leftSum += a[i];
        }
        return -1;
    }

};

/*

Time Complexity: O(N)
Space Complexity: O(1)

*/