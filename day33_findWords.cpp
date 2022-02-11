// Question Link : https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mainCount;
        for(auto it: chars)
            mainCount[it]++;
        int count = 0;
        for(int i=0; i<words.size(); i++) {
            unordered_map<char, int> tempCount;
            for(auto ch: words[i])
                tempCount[ch]++;
            bool flag = true;
            for(auto ch: words[i])
            {
                if(tempCount[ch] > mainCount[ch]) {
                    flag = false;
                    break;
                }
            }
            if(flag)
                count += words[i].size();
        }
        return count;
    }
};

/*

Time Complexity: O(N^2)
Space Complexity: O(N)

*/