// Question Link : https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> v;
        int max = 0;
        for(int i = n-1; i>=0; i--)
        {
            if( max <= a[i] ) {
                v.push_back(a[i]);
                max = a[i];
            }
        }
        reverse(v.begin(), v.end());
        return v;
    }
};

/*

Time Complexity: O(N)
Space Complexity: O(N)

*/