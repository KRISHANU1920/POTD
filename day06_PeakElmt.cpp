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
    
int findPeakElement(vector<int>& nums) 
{
    int start = 0, end = nums.size()-1;
    while(start < end)
    {
        int mid = start + (end - start)/2;
        if(nums[mid] < nums[mid+1])
            start = mid + 1;
        else 
            end = mid;
    }
    return start;
}

/*

Time Complextiy: O(log2(N))
Space Complexity: O(1)

*/