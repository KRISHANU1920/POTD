// Question Link : https://practice.geeksforgeeks.org/problems/d6e88f06b273a60ae83992314ac514f71841a27d/1

int smallestSubstring(string S) 
{
    int n = S.size();
    int zero = -1, one = -1, two = -1;
    int ans = INT_MAX;
    
    // if string length is less than 3 then not possible
    if(n < 3)
        return -1;
    
    for(int i=0; i<n; i++)
    {
        // store the position of any of the character scanned
        if(S[i] == '0')
            zero = i;
        else if(S[i] == '1')
            one = i;
        else 
            two = i;
        
        // if all the three characters are scanned in substring 
        if(zero != -1 && one != -1 && two != -1)
        {
            // storing minimum window size of possible substring
            ans = min(ans, (max(zero, max(one, two)) - min(zero, min(one, two)) + 1));
        }
    }
    return (ans == INT_MAX) ? -1 : ans;
}

/*

Time Complexity: O(|S|)
Space Complexity: O(1)

*/