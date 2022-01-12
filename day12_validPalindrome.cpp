// Question Link: https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        int i, j, size;
        for(i=0, j=0; s[j] != '\0'; j++)
        {
            if(isalnum(s[j])) {
                if(isupper(s[j]))
                    s[j] = tolower(s[j]);
                s[i++] = s[j];
            }
        }
        size = i;
        for(i=0, j=size-1; i<j; i++, j--)
        {
            if(s[i] != s[j])
                return false;
        }
        return true;
    }
};

/*

Time Complexity: O(s.length)
Space Complexity: O(1)

*/