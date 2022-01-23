// Question Link : https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for(auto it: operations)
        {
            if(it == "X++" || it == "++X")
                X++;
            else
                X--;
        }
        return X;
    }
};

/*

Time Complexity: O(N)
Space Complexity: O(1)

*/