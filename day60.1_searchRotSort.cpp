// Question Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

int findMin(vector<int>& nums) 
{
    int left = 0, right = size(nums)-1;
    
    while(left < right)
    {
        int mid = left + (right - left)/2;
        
        if(nums[0] <= nums[mid])
            left = mid + 1;
        else
            right = mid;
    }
    
    if(nums[0] < nums[left])
        return nums[0];
    else
        return nums[left];
}

/*

Time Complexity: O(log(N))
Space Complexity: O(1)

*/