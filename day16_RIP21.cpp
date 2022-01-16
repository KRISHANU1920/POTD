#include <bits/stdc++.h>
using namespace std;

bool streak(int n)
{
    if( n % 21 == 0)
        return false;
    while( n > 0)
    {
        if( n % 100 == 21)
            return false;
        n /= 10;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(streak(n))
            cout << "The streak lives still in our heart!\n";
        else
            cout << "The streak is broken!\n";
    }
    return 0;
}