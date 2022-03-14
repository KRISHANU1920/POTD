// Question Link : https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/

int minimumCost(vector<int>& cost) 
{
    sort(cost.begin(), cost.end());
    int n = cost.size(), minCost = 0;
    
    for(int i=n-1; i>=0; i -= 3)
    {
        if(i == 0) {
            minCost += cost[i];
            break;
        }
        minCost += cost[i] + cost[i-1];
    }
    
    return minCost;
}

/*

Time Complexity: O(N.Log(N))
Space Complexity: O(1)

*/