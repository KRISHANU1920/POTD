// Question Link : https://leetcode.com/problems/group-anagrams/

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> ump;
    for(int i=0; i<strs.size(); i++)
    {
        string temp = strs[i];
        sort(temp.begin(), temp.end());
        ump[temp].push_back(strs[i]);
    }
    for(auto it: ump) {
        ans.push_back(it.second);
    }
    return ans;
}

/*

Time Complexity: O(N.KLog(K))
Space Complexity: O(N)

*/