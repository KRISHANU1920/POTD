// Question Link : https://practice.geeksforgeeks.org/problems/pangram-checking-1587115620/1/

bool checkPangram (string &str) 
{
    int n = str.size(); 
    int freq[26] = {0}; 
    for(int i=0; i<n; i++) 
    {
        char ch = str[i]; 
        if(isalpha(ch))
        {
            if(isupper(ch))
                freq[ch-'A']++; 
            if(islower(ch))
                freq[ch-'a']++; 
                
        }
    }
    
    for(int i=0; i<26; i++) 
    {
        if(freq[i] == 0) 
        return false;
    }
    return true;
}

/*

Time Complexity: O(N)
Space Complexity: O(No. of Distinct Characters)

*/