// Question Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2,0);
        int n = numbers.size();
        int low = 0, high = n-1;
        while(low < high)
        {
            if(numbers[low] + numbers[high] == target)
            {
                ans[0] = low + 1;
                ans[1] = high + 1;
                return ans;
            }
            else if(numbers[low] + numbers[high] < target)
                low++;
            else
                high--;
        }
        return ans;
    }
};

/*

Time Complexity: O(N)
Space Complexity: O(1)

*/