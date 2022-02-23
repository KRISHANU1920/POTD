// Question Link : https://www.hackerrank.com/contests/mca21-opc-3/challenges/bro-code/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--)
    {
        int N, i;
        cin >> N;
        long long Person[N], Crushes[N];
        for(i=0; i<N; i++)
            cin >> Person[i];
        for(i=0; i<N; i++)
            cin >> Crushes[i];
        int maxDist = 0;
        for(i=0; i<N; i++)
        {
            int s = i, e = N-1;
            while(s <= e)
            {
                int mid = s + (e-s)/2;
                if(Crushes[mid] >= Person[i]) {
                    s = mid + 1;
                    maxDist = max(maxDist, (mid-i));
                }
                else
                    e = mid - 1;
            }
        }
        cout << maxDist << "\n";
    }
    return 0;
}

/*

Time Complexity: O(N.Log(N))
Space Complexity: O(1)

*/