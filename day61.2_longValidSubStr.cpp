// Question Link : https://practice.geeksforgeeks.org/problems/3b47f0ad00f953dd514235ddec54e39fdc297dda/1/

int findMaxLen(string s) 
{
    stack<int> st;
    int ans = 0;
    
    st.push(-1);
    
    for(int i=0; i<s.size(); i++)
    {
        char ch = s[i];
        
        if(ch == '(')
            st.push(i);
        else
        {
            st.pop();
            
            // If stack is empty. push current index as
            // base for next valid substring (if any)
            if(st.empty())
                st.push(i);
            else
                ans = max(ans, i-st.top());
        }
    }
    return ans;
}

/*

Time Complexity: O(N)
Space Complexity: O(N)

*/