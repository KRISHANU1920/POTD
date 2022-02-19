// Question Link : https://practice.geeksforgeeks.org/problems/47e5aa3f32aee9e0405f04960f37c8a562d96a2f/1

// Approach 1:Linear Space
void prank(long long a[], int n)
{
    long long b[n];
    for(int i=0; i<n; i++)
    {
        b[i] = a[a[i]];
    }
    for(int i=0; i<n; i++)
    {
        a[i] = b[i];
    }
}

/* 

Time Complexity: O(N)
Space Complexity: O(N)

*/

// Approach 2: Constant Space
void prank(long long a[], int n)
{
    for(int i=0; i<n; i++)
    {
        a[i] = a[i] + n*((a[a[i]])%n);
    }
    for(int i=0; i<n; i++)
    {
        a[i] = a[i]/n;
    }
}

/* 

Time Complexity: O(N)
Space Complexity: O(1)

*/