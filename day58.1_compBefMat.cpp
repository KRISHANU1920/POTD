// Question Link : https://practice.geeksforgeeks.org/problems/85781966a9db2a1ac17eaaed26a947eba5740d56/1

vector<vector<int>> computeBeforeMatrix(int N, int M, vector<vector<int>> after)
{
    for(int i=N-1; i>=0; i--)
    {
        for(int j=M-1; j>=0; j--)
        {
            // if first element
            if(i==0 && j==0)
                break;
            // if first column element
            else if(j == 0)
                after[i][j] -= after[i-1][j];
            // if first column element
            else if(i == 0)
                after[i][j] -= after[i][j-1];
            else
                after[i][j] -= after[i][j-1] + after[i-1][j] - after[i-1][j-1];
        }
    }
    return after;
}

/*

Time Complexity: O(N*M)
Space Complexity: O(1)

*/