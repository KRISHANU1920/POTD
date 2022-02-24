// Question Link : https://leetcode.com/problems/add-binary/

string addBinary(string a, string b) 
{
    string ans = "";
    int i = size(a)-1, j = size(b)-1, sum = 0, carry = 0;
    
    while(i>=0 || j>=0)
    {
        if(i < 0) {
            a[++i] = '0';
        }
        if(j < 0) {
            b[++j] = '0';
        }
        
        int sum = (a[i]-'0') + (b[j]-'0') + carry;
        if(sum == 0) {
            ans.push_back('0');
            carry = 0;
        }
        else if(sum == 1) {
            ans.push_back('1');
            carry = 0;
        }
        else if(sum == 2) {
            ans.push_back('0');
            carry = 1;
        }
        else if(sum == 3) {
            ans.push_back('1');
            carry = 1;
        }
        i--;
        j--;
    }
    if(carry)
        ans.push_back('1');
    
    reverse(ans.begin(), ans.end());
    return ans;
}

/*

Time Complexity: O(max(a,b))
Space Complexity: O(max(a,b))

*/