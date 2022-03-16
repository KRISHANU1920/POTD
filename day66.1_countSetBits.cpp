// Question Link : https://leetcode.com/problems/counting-bits/

// Approach 1: TC-O(N.Log(N)) and SC-O(1)
vector<int> countBits(int n) 
{
    vector<int> ans(n+1);
    
    ans[0] = 0;
    
    for(int i=1; i<=n; i++)
    {
        int count = 0;
        int num = i;
        while(num != 0)
        {
            count += num % 2;
            num /= 2;
        }
        
        ans[i] = count;
    }
    
    return ans;
}


// Approach 2: TC-O(N) and SC-O(1)
vector<int> countBits(int n) 
{
    vector<int> ans(n+1);
    
    // t[0] will be 0 beacuse 0 has count of set bit is 0
    ans[0] = 0;
    
    // we can compute current set bit count using previous count
    // as x/2 in O(1) time
    
    // i%2 will be 0 for even number and 1 for odd number
    for(int i=1; i<=n; i++)
        ans[i] = ans[i/2] + i%2;

    return ans;
}