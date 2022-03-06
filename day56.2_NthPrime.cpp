// Question Link : https://practice.geeksforgeeks.org/problems/nth-number-made-of-prime-digits4319/1

int primeDigits(int n)
{
    string ans = "";
    
    while(n > 0)
    {
        int rem = n % 4;
        if(rem == 1)
            ans += '2';
        else if(rem == 2)
            ans += '3';
        else if(rem == 3)
            ans += '5';
        else
            ans += '7';
        
        n--;
        n /= 4;
    }
    reverse(ans.begin(), ans.end());
    return stoi(ans);
}

/*

Time Complexity: O(Log4(N))
Space Complexity: O(Log4(N))

*/