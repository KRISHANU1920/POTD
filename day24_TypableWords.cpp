// Question Link : https://leetcode.com/problems/maximum-number-of-words-you-can-type/

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int m = text.size();
        int n = brokenLetters.size();
        int count = 0;
        bool word = true;
        for(int i=0; i<=m; i++)
        {
            if(word && (text[i]==' ' || i==m)) {
                count++;
                continue;
            }
            if(!word && (text[i]!=' ' || i==m)) {
                continue;
            }
            if(!word && text[i]==' ') {
                word = true;
                continue;
            }
            for(int j=0; j<n; j++)
            {
                if(text[i] == brokenLetters[j]) {
                    word = false;
                    break;
                }
            }
        }
        return count;
    }
};

/*

Time Complexity: O(m.n)
Space Complexity: O(1)

*/