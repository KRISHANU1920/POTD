// Question Link : https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0

#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<int, int> &a, pair<int, int> &b)
{
    if(a.second != b.second)
        return a.second > b.second;
    
    return a.first < b.first;
}

void sortByFreq(unordered_map<int, int> &ump)
{
    vector<pair<int , int>> v;
    
    for(auto it: ump)
        v.push_back(it);
    
    sort(v.begin(), v.end(), comparator);
    
    for(auto it: v)
        {
            int count = 0;
            while(count < it.second) {
                cout << it.first << " ";
                count++;
            }
        }
        cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T; 
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        int A[N];
        for(int i=0; i<N; i++)
            cin >> A[i];
        
        unordered_map<int ,int> ump;
        for(int i=0; i<N; i++)
        {
            ump[A[i]]++;
        }
        
        sortByFreq(ump);
    }
    return 0;
}

/*

Time Complexity: O(N.Log(N))
Space Complexity: O(N)

*/