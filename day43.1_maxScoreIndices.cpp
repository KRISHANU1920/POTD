// Question Link : https://leetcode.com/problems/all-divisions-with-the-highest-score-of-a-binary-array/

vector<int> maxScoreIndices(vector<int>& nums) 
{
    vector<int> ans;
    int sum = 0;
    for(int i=0; i<nums.size(); i++)
        sum += nums[i];
        
    int i, zero = 0, one = sum, Maxi = INT_MIN;
    for(i=0; i<nums.size(); i++) {
        if(Maxi < zero + one) {
            Maxi = zero + one;
            ans.clear();
            ans.push_back(i);
        }
        else if(Maxi == zero + one)
            ans.push_back(i);
        
        (nums[i]==1) ? one-- : zero++;  
    }
    if(Maxi < zero) {
        ans.clear();
        ans.push_back(i);
    }
    else if(Maxi == zero)
        ans.push_back(i);
    
    return ans;
}

/*

Time Complexity: O(N)
Space Complexity: O(1)

*/