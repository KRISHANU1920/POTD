// Approach 1: Direct/Naive

#include<bits/stdc++.h>
using namespace std;
 
string solve (int N) {
   for(int i=2; i*i <= N; i++)
   {
       if( N%i==0 )
          return "Yes";
   }
   return "No";
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
 
        string out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}

/*

Time Complextiy: O(T.sqrt(N))
Space Complexity: O(1)

*/

// Approach 2: Using Sieve of Eratosthenes

#include<bits/stdc++.h>
#define Size 1000001
using namespace std;
 
vector<bool> isPrime(Size, true);
 
void sieve(int N)
{
    for(int i=2; i*i <= N; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<=N; j += i)
                isPrime[j] = false;
        }
    }
}
 
string solve (int N) {
    if(isPrime[N])
        return "No";
    else
        return "Yes";
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    sieve(Size);
    while(T--)
    {
        int N;
        cin >> N;
 
        string out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}

/*

Time Complexity: O(T+Nlog(log(N)))
Space Complexity: O(Size)

*/