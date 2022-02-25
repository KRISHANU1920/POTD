// Question Link : https://practice.geeksforgeeks.org/problems/return-two-prime-numbers2509/1

vector<int> primeDivision(int N)
{
    vector<int> ans;
    
    // implementing sieve
    vector<bool> isPrime(N, true);
    for(int i=2; i*i <= N; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<=N; j += i)
                isPrime[j] = false;
        }
    }
    
    // finding pairs
    for(int i=2; i<=N/2; i++)
    {
        if(isPrime[i]) {
            int num = N-i;
            if(isPrime[num]) {
                ans.push_back(i);
                ans.push_back(num);
                break;
            }
        }
    }
    return ans;
}

/*

Time Complexity: O(N.log(log(N)))
Space Complexity: O(N)

*/