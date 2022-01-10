// Question Link: https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/

class Solution {
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        for(int i=0; (i+2)<s.size(); i++)
        {
            if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2])
                count++;
        }
        return count;
    }
};

/* 

Time Complexity: O(N)
Space Complexity: O(1)

*/