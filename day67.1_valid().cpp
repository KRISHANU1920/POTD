// Question Link : https://leetcode.com/problems/valid-parentheses/

 bool isValid(string s) 
{
    stack<char> st;
    int n = s.size();
    
    if(n & 1)
        return false;
    
    for(int i=0; i<n; i++)
    {
        char ch = s[i];
        
        if(ch == '(' || ch == '{' || ch == '[')
            st.push(ch);
        else 
        {
            if(st.empty())
                return false;
            else if(st.top() == '(' && ch == ')')
                st.pop();
            else if(st.top() == '{' && ch == '}')
                st.pop();
            else if(st.top() == '[' && ch == ']')
                st.pop();
            else
                return false;
        }
    }
    
    return st.empty();
}

/*

Time Complexity: O(N)
Space Complexity: O(N)

*/