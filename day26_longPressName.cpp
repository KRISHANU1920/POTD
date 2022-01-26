// Question Link : https://leetcode.com/problems/long-pressed-name/

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int m = name.size(), n = typed.size();
        int i = 0, j = 0;
        while(i<m && j<n)
        {
            if(name[i] == typed[j]) {
                i++;
                j++;
            }
            else if(i>0 && name[i-1] == typed[j])
                j++;
            else
                return false;
        }
        if(i<m)
            return false;
        while(j<n) {
            if(name[i-1]==typed[j])
                j++;
            else
                return false;
        }
        return true;
    }
};

/*

Time Complexity: O(min(m,n))
Space Complexity: O(1)

*/