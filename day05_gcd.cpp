// Question Link: https://www.codechef.com/problems/AMSGAME1

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
      return a;
    else
       return gcd(b, a%b); 
}

int main() 
{ 
	ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
	cin >> T;
	while(T--)
	{
	    int N;
	    cin >> N;
	    int *A = new int [N];
	    for(int i=0; i<N; i++)
	        cin >> A[i];
	    int ans = A[0];
	    for(int i=1; i<N; i++)
	        ans = gcd(ans, A[i]);
	    cout << ans << "\n";
        delete [] A;
	}
	return 0;
}

/*

Time Complexity: O(T.N.log(min(ans, A[i])))
Space Complexity: O(1)

*/