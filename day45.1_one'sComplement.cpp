// Question Link : https://practice.geeksforgeeks.org/problems/1s-complement2819/1

string onesComplement(string S,int N)
{
    string ans;
    for(int i=0; i<N; i++)
    {
        if(S[i] == '0')
            ans += '1';
        else
            ans += '0';
    }
    return ans;
}

/*

Time Complexity: O(N)
Space Complexity: O(N)

*/