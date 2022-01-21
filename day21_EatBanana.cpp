// Question Link : https://leetcode.com/problems/koko-eating-bananas/

class Solution {
public:
    
    bool isPossible(vector<int>& piles, int h, int k)
    {
        int i = 0, count = 0;
        for(int i=0; i<piles.size(); i++)
        {
            count += ceil(1.0*piles[i]/k);
            if(count > h)
                return false;
        }
        return true;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while( low <= high )
        {
            int mid = low + (high - low)/2;
            if(isPossible(piles, h, mid))
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};

/*

Time Complexity: O(Nlog(M)) [where N is no. of piles & M is range of k (low to high)
Space Complexity: O(1)

*/