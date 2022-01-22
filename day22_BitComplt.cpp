// Question Link : https://leetcode.com/problems/complement-of-base-10-integer/

class Solution {
public:
    int bitwiseComplement(int n) {
        int res = 0, fac = 1;
        if(n == 0)
            return 1;
        while(n)
        {
            res += fac*((n & 1) ? 0 : 1);
            fac = fac << 1;
            n = n >> 1;
        }
        return res; 
    }
};

/*

Time Complexity: O(log2(N))
Space Complexity: O(1)

*/