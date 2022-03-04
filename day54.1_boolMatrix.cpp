// Question Link : https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1

// Approach 1: TC: O(R*C) and SC: O(R+C)
void booleanMatrix(vector<vector<int> > &matrix)
{
    int R = matrix.size(), C = matrix[0].size();
    
    vector<int> dummyRow(R, 0);
    vector<int> dummyCol(C, 0);
    
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            if(matrix[i][j] == 1)
            {
                dummyRow[i] = 1;
                dummyCol[j] = 1;
            }
        }
    }
    
    for(int i=R-1; i>=0; i--)
    {
        for(int j=C-1; j>=0; j--)
        {
            if(dummyRow[i]==1 || dummyCol[j]==1)
                matrix[i][j] = 1;
        }
    }
}


// Approach 2: TC: O(R*C) and SC: O(1) [Optimized Space]
void booleanMatrix(vector<vector<int> > &matrix)
{
    int R = matrix.size(), C = matrix[0].size();
    bool cols = false;
    
    for(int i=0; i<R; i++)
    {
        if(matrix[i][0] == 1)
            cols = true;
            
        for(int j=0; j<C; j++)
        {
            if(matrix[i][j] == 1)
            {
                matrix[i][0] = 1;
                matrix[0][j] = 1;
            }
        }
    }
    
    for(int i=R-1; i>=0; i--)
    {
        for(int j=C-1; j>=0; j--)
        {
            if(matrix[i][0]==1 || matrix[0][j]==1)
                matrix[i][j] = 1;
        }
        if(cols)
            matrix[i][0] = 1;
    }
}