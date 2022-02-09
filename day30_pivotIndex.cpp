// Question Link : https://leetcode.com/problems/find-pivot-index/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i, n = nums.size(), sum = 0, prefixSum = 0; 
        for(i = 0; i<n ; i++) 
            sum += nums[i]; 
        for(i=0; i<n; i++) 
        {
            if(prefixSum == (sum-prefixSum-nums[i]))
                return i; 
            prefixSum += nums[i]; 
        }
        return -1;
    }
};

/*

Time Complexity: O(N)
Space Complexity: O(1)

*/