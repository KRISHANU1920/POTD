// Question Link : https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        sort(a.begin(), a.end());
        long long mini = INT_MAX;
        
        for(int i=0; i+m-1 < n; i++)
        {
            mini = min(mini, a[i+m-1] - a[i]);
        }
        
        return mini;
    } 

/*

Time Complexity: O(N.Log(N))
Space Complexity: O(1)

*/