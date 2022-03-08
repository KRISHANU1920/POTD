// Question Link : https://practice.geeksforgeeks.org/problems/51b7f8fb8b33d657a857f230361b7dad6565ce62/1

vector<int> canMakeTriangle(vector<int> A, int N)
{
    vector<int> ans(N-2, 0);
    for(int i=0; i<N-2; i++)
    {
        int a = A[i], b = A[i+1], c = A[i+2];
        if(a+b>c && b+c>a && c+a>b)
            ans[i] = 1;
    }
    return ans;
}

/*

Time Complexity: O(N)
Space Complexity: O(N)

*/