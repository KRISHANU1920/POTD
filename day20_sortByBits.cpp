// Question Link : https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/

// function to count set bits of a number
int countBits(int x)
{
    int count = 0;
    while(x)
    {
        x = x & (x-1);
        count++;
    }
    return count;
}

// comparator function to sort in a particular order
bool compare(int a, int b)
{
    int ca = countBits(a), cb = countBits(b);
    if( ca == cb )
        return (a > b) ? false : true;
    else
        return (ca > cb) ? false : true;
}

class Solution {
public:    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};

/*

Time Complexity: O(Nlog(N))
Space Complexity: O(1)

*/