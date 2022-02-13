// Question Link : https://leetcode.com/problems/number-of-different-integers-in-a-string/

int numDifferentIntegers(string word) 
{
    set<string> ans;
    int i = 0;
    while(i < word.size())
    {
        string str = "";
        if(isdigit(word[i])) {
            while(word[i] == '0') {
                i++;
            }
            while(isdigit(word[i])) {
                str += word[i++];
            }
            ans.insert(str);
        }
        else
            i++;
    }
    return ans.size();
}

/*

Time Complexity: O(word.size())
Space Compexity: O(ans.size())

*/