// Question Link : https://leetcode.com/problems/next-greater-element-ii/

vector<int> nextGreaterElements(vector<int>& nums) 
{
    stack<int> st;
    int n = nums.size();
    vector<int> ans(n, -1);
    
    for(int i=2*n-1; i>=0; i--)
    {
        int curr = nums[i%n];
        
        while(!st.empty() && curr >= st.top()) {
            st.pop();
        }
        
        ans[i%n] = st.empty() ? -1 : st.top();
        st.push(curr);
    }
    
    return ans;
}

/*

Time Complexity: O(N) - Only two traversals of the nums array are done. 
                        Further, atmost 2n elements are pushed and popped from the stack
Space Complexity: O(N)

*/