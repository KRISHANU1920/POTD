// Question Link : https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/

string minRemoveToMakeValid(string s) 
{
    stack<int> st;
    string ans = "";
    
    for(int i=0; i<s.size(); i++)
    {
        char ch = s[i];
        
        if(ch == '(') {
            st.push(ans.size());
            ans += s[i];
        }
        
        else if(ch == ')') {
            if(!st.empty()) {
                st.pop();
                ans += s[i];
            }
        }
        else
            ans += s[i];
    }
    
    while(!st.empty())
    {
        ans.erase(ans.begin() + st.top());
        st.pop();
    }
    
    return ans;
}

/*

Time Complexity: O(N)
Space Complexity: O(N)

*/