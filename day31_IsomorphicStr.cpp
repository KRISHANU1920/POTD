// Question Link : https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        vector<int> mapS(256, -1);
        vector<int> mapT(256, -1);
        for(int i=0; i<n; i++)
        {
            char ch1 = s[i];
            char ch2 = t[i];
            
            if(mapS[ch1] == -1 && mapT[ch2] == -1) {
                mapS[ch1] = ch2;
                mapT[ch2] = ch1;
            }
            else if(!(mapS[ch1] == ch2 && mapT[ch2] == ch1))
                return false;
        }
        return true;
    }
};

/*

Time Complexity: O(N)
Space Complexity: O(1)

*/