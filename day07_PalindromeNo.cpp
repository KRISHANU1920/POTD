// Question Link: https://leetcode.com/problems/palindrome-number/

bool isPalindrome(int x) {
    long long int rev = 0;
    int N = x;
    while(N > 0)
    {
        rev = 10*rev + (N%10);
        N /= 10;
    }
    if(rev == x)
        return true;
    else
        return false;
}

/* 
   
Time Complexity: O(log10(N))
Space Complexity: O(1)

*/