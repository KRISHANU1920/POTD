// Question Link : https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        int check[26] = {0};
        if(s.size() != t.size())
            return false;
        for (char ch: s)
            check[ch-'a']++;
        for(char ch: t)
            check[ch-'a']--;
        for(int i=0; i<26; i++)
            if(check[i] != 0)
                return false;
        return true;
    }
};

/*

Time Complexity: O(N)
Space Complexity: O(1)

*/