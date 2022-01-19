// Question Link : https://leetcode.com/problems/majority-element/

// Approach 1: Using Hashmap

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> ump;
        for(int i=0; i<nums.size(); i++)
            ump[nums[i]]++;
        for(auto it: ump)
            if(it.second > nums.size()/2)
                return it.first;
        return -1;
    }
};

/*

Time Complexity: O(N)
Space Complexity: O(N)

*/

//Approach 2: Using Boyer Moore's Voting Algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote = 0, major = -1, count = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if( vote == 0 ) {
                major = nums[i];
                vote = 1;
            }
            else {
                if( major == nums[i] )
                    vote++;
                else
                    vote--;
            }
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(major == nums[i])
                count++;
        }
        if(count > nums.size()/2)
            return major;
        return -1;
    }
};

/*

Time Complexity: O(N)
Space Complexity: O(1)

*/