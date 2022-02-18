// Question Link : https://leetcode.com/problems/3sum/

vector<vector<int>> threeSum(vector<int>& nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    
    for(int low=0; (low+2)<size(nums); low++)
    {
        // skip duplicates form left
        if((low > 0) && (nums[low] == nums[low-1]))
            continue;
        
        int mid = low+1, right = nums.size()-1;
        while(mid < right)
        {
            int sum = nums[low] + nums[mid] + nums[right];
            
            // if sum is 0 store result to ans
            if(sum == 0) {
                ans.push_back({nums[low], nums[mid], nums[right]});
                right--;
                
                // skip duplicate elements from right
                while((mid < right) && (nums[right] == nums[right+1]))
                    right--;
            }
            else if(sum < 0)
                mid++;
            else
                right--;
        }
    }
    return ans;
}

/*

Time Complexity: O(N^2)
Space Complexity: O(1)

*/