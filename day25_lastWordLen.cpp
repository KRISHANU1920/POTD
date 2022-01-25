// Question Link : https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool letter = false;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i] != ' ')
                letter = true;
            if(letter) {
                if(s[i] == ' ')
                   break;
                count++;
            }
        }
        return count;
    }
};

/*

Time Complexity: O(s.size())
Space Complexity: O(1)

*/