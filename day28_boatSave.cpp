// Question Link : https://leetcode.com/problems/boats-to-save-people/

// My solution: 
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i = 0, count = 0, j = people.size()-1;
        sort(people.begin(), people.end());
        while(i < j)
        {
            if(people[i]+people[j] <= limit) {
                i++;
                j--;
            }
            else
                j--;
            count++;
        }
        if(i==j)
            count++;
        return count;
    }
};

// Editorial Solution:
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i = 0, count = 0, j = people.size()-1;
        sort(people.begin(), people.end());
        while(i <= j)
        {
            if(people[i]+people[j] <= limit)
                i++;
            j--;
            count++;
        }
        return count;
    }
};

/*

Time Complexity: O(Nlog(N))
Space Complexity: O(N) due to sorting

*/