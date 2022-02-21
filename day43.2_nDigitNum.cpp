// Question Link : https://practice.geeksforgeeks.org/problems/n-digit-numbers-with-digits-in-increasing-order5903/1

void solve(vector<int>& ans, int N, int sum, int temp)
{
    // base case
    if(N == 0) {
        ans.push_back(sum);
        return;
    }
    
    for(int i=temp; i<=9; i++) {
        int num = sum*10 + i;
        solve(ans, N-1, num, i+1);
    }
}

vector<int> increasingNumbers(int N)
{
    vector<int> ans;
    if(N==1) {
        for(int i=0; i<=9; i++)
            ans.push_back(i);
    }
    else {
        solve(ans, N, 0, 1);
    }
    return ans;
}

/*

Time Complexity: O(9^N)
Space Complexity: O(N)

*/