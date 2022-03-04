// Question Link : https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1

bool search(vector<vector<int> > matrix, int n, int m, int x) 
{
    int row = 0, col = m-1;
    while(row < n && col < m)
    {
        if(matrix[row][col] == x)
            return true;
        
        else if(matrix[row][col] < x)
            row++;
        
        else
            col--;
    }
    return false;
}

/*

Time Complexity: O(N+M)
Space Complexity: O(1)

*/