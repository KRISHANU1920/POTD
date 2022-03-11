// Question Link : https://www.interviewbit.com/problems/max-continuous-series-of-1s/

// Approach 1: Brute Force, TC: O(N^2) and SC: O(1)
vector<int> Solution::maxone(vector<int> &A, int B) 
{
    int i, j, left = 0, right = 0, N = A.size();
    for(i=0; i<N; i++)
    {
        int count = B;
        for(j=i; j<N; j++)
        {
            if(A[j] == 0)
                count--;
            
            if(count < 0)
                break;
        }
        if(right - left < j - i)
        {
            left = i;
            right = j;
        }
    }
    vector<int> ans;
    for(int i=left; i<right; i++)
        ans.push_back(i);
    
    return ans;
}


// Approach 2: Sliding Window, TC: O(N) and SC: O(1)
vector<int> Solution::maxone(vector<int> &A, int B) 
{
    int curLeft = 0, curRight = 0;     // indexes for current window
    int bestLeft = 0, bestRight = 0;   // indexes for best window
    int zeroCount = 0;                 // zero count of current window

    while(curRight < A.size())
    {
        if(zeroCount <= B) {
            // including new zeroes into the window
            if(A[curRight] == 0)
                zeroCount++;
            curRight++;
        }
        
        if(zeroCount > B)
        {
            // Travelling till we find the leftmost zero to discard it from the window
            if(A[curLeft] == 0)
                zeroCount--;
            curLeft++;
        }

        // checking for best window
        if(curRight-curLeft > bestRight-bestLeft)
        {
            bestLeft = curLeft;
            bestRight = curRight;
        }
    }

    vector<int> ans;
    for(int i=bestLeft; i<bestRight; i++)
        ans.push_back(i);
    
    return ans;
}
