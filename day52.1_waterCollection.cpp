// Question Link : https://practice.geeksforgeeks.org/problems/amount-of-water1348/1


// Approach 1: TC-O(N) and SC-O(N)
int maxWater(int arr[], int n) 
{
    int *left = new int [n];
    int *right = new int [n];
    int result = 0;
    
    // assigning left array
    left[0] = arr[0];
    for(int i=1; i<n; i++)
        left[i] = max(left[i-1], arr[i]);
    
    // assigning right array
    right[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--)
        right[i] = max(right[i+1], arr[i]);
    
    // calculate water stored
    for(int i=1; i<n-1; i++)
    {
        int temp = min(left[i-1], right[i+1]);
        if(temp > arr[i])
            result += temp - arr[i];
    }
    
    // free memory
    delete left;
    delete right;
    
    return result;
}

// Approach 2: TC-O(N) and SC-O(1)
int maxWater(int arr[], int n) 
{
    int left = 0, right = n-1;
    int result = 0, maxLeft = 0, maxRight = 0;
    while(left <= right)
    {
        if(arr[left] <= arr[right])
        {
            if(arr[left] >= maxLeft)
                maxLeft = arr[left];
            else
                result += maxLeft - arr[left];
            
            left++;
        }
        else {
            if(arr[right] >= maxRight)
                maxRight = arr[right];
            else
                result += maxRight - arr[right];
            
            right--;
        }
    }
    return result;
}