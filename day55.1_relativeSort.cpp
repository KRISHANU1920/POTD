// Question Link : https://practice.geeksforgeeks.org/problems/relative-sorting4323/1

vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
{
    vector<int> ans;
    map<int , int> mp;
    
    for(int i=0; i<N; i++)
        mp[A1[i]]++;
    
    for(int i=0; i<M; i++)
    {
        int count = 0;
        while(count < mp[A2[i]]) {
            ans.push_back(A2[i]);
            count++;
        }
        mp.erase(A2[i]);
    }
    
    for(auto it: mp)
    {
        int count = 0;
        while(count < it.second) {
            ans.push_back(it.first);
            count++;
        }
    }
    return ans;
}

/*

Time Complexity: O(N.Log(N))
Space Complexity: O(N)

*/