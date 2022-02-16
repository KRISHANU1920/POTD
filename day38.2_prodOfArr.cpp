// Question Link : https://leetcode.com/problems/product-of-array-except-self/

// Approach 1: Using Double Pass
vector<int> productExceptSelf(vector<int>& nums) 
{
    vector<int> ans(size(nums), 1);
    for(int i=1; i<size(nums); i++)
        ans[i] = ans[i-1] * nums[i-1];
    int suffProd = 1;
    for(int i=size(nums)-1; i>=0; i--)
    {
        ans[i] *= suffProd;
        suffProd *= nums[i];
    }
    return ans;
}

// Approach 2: Using Single Pass
vector<int> productExceptSelf(vector<int>& nums) 
{
    vector<int> ans(size(nums), 1); 
    int pref = 1, suff = 1, n = size(nums);
    for(int i=0; i<n ;i++) 
    {
        ans[i] *= pref;
        pref *= nums[i];
        ans[n-i-1] *= suff;
        suff *= nums[n-i-1];
    }
    return ans;
}

/*

Time Complexity: O(N)
Space Complexity: O(1)

*/