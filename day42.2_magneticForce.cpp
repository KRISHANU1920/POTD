// Question Link : https://leetcode.com/problems/magnetic-force-between-two-balls/

bool isPossible(vector<int>& position, int mid, int m)
{
    int count = 1, dist = position[0];
    for(int i=1; i<position.size(); i++)
    {
        if(position[i] - dist >= mid) {
            count++;
            dist = position[i];
        }
        if(count == m)
            return true;
    }
    return false;
}

int maxDistance(vector<int>& position, int m) 
{
    sort(position.begin(), position.end());
    int ans, low = 0, n = position.size(), high = position[n-1];
    
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(isPossible(position, mid, m)) {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return ans;
}

/*

Time Complexity: O(N.Log(N))
Space Complexity: O(1)

*/