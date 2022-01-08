// Question Link: https://www.hackerrank.com/contests/anticoding/challenges/aditya-and-modulo

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        unordered_map<int , int> ump;
        int N, M, X, unique = 0;
        cin >> N >> M;
        for(int i=0; i<N; i++)
        {
            cin >> X;
            ump[X%M]++;
        }
        for(auto it: ump)
        {
            if(it.second == 1)
                unique++;
        }
        cout << ump.size() << "\n" << unique << "\n";
    }
}

/*

Time Complexity: O(T.N)
Space Complexity: O(ump.size())

*/