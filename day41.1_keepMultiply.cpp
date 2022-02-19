// Quesiton Link : https://leetcode.com/problems/keep-multiplying-found-values-by-two/

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        sort(nums.begin(), nums.end());
        for(int it: nums)
        {
            if(it == original)
                original = original << 1;
        }
        return original;
    }
};

/*

Time Complexity: O(N.Log(N))
Space Complexity: O(1)

*/