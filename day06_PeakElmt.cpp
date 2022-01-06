// Question Link: https://leetcode.com/problems/find-peak-element/

// Approach 1: Finding MAX element of array

int findPeakElement(vector<int>& nums) 
{
    int max = INT_MIN, index=-1;
    for(int i=0; i<nums.size(); i++)
        if(max <= nums[i]) {
            max = nums[i];
            index = i;
        }
    return index;
}  

/*

Time Complexity: O(N)
Space Complextiy: O(1)

*/

// Approach 2: Binary Search
    
int findPeakElement(vector<int>& nums) {
    int n = nums.size();
    int low = 0, high = n - 1;
    if(n==1)
        return 0;
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(mid > 0 && mid < n-1)
        {
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1])
                return mid;
            else if(nums[mid-1] > nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else if(mid == 0) {
            if(nums[mid] > nums[mid+1])
                return 0;
            else
                return 1;
        }
        else if(mid == n-1) {
            if(nums[mid] > nums[mid-1])
                return n-1;
            else
                return n-2;
        }
    }
    return -1;
}

/*

Time Complextiy: O(logN)
Space Complexity: O(1)

*/