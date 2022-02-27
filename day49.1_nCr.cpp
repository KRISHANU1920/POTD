// Question Link : https://practice.geeksforgeeks.org/problems/ncr1019/1/

// Approach 1: 2D array space
int nCr(int n, int r)
{
    int comb[n+1][r+1], mod = 1e9+7;
    
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=r; j++)
        {
            if(j==0 || i==j)
                comb[i][j] = 1;
            
            else if(i<j)
                comb[i][j] = 0;
            else
                comb[i][j] = (comb[i-1][j-1]%mod + comb[i-1][j]%mod) % mod;
        }
    }
    return comb[n][r] % mod;
}

/*

Time Complexity: O(n.r)
Space Complexity: O(n.r)

*/

// Approach 2: 1D array space
int nCr(int n, int r)
{
    int comb[r+1] = {0}, mod = 1e9+7;
    comb[0] = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=min(i,r); j>0; j--)
        {
            // nCj = (n-1)Cj + (n-1)C(j-1); 
            comb[j] = (comb[j]%mod + comb[j-1]%mod) % mod;
        }
    }
    return comb[r] % mod;
}

/*

Time Complexity: O(n.r)
Space Complexity: O(r)

*/