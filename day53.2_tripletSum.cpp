// Question Link : https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1

bool findTriplets(int arr[], int n)
{ 
    sort(arr, arr+n);
    int first, second, third, sum = 0;
    for(int i=0; i<n-2; i++)
    {
        first = i;
        second = i+1;
        third = n-1;
        while(second < third)
        {
            sum = arr[first] + arr[second] + arr[third];
            if(sum == 0)
                return true;
            else if(sum < 0)
                second++;
            else
                third--;
        }
    }
    return false;
}

/*

Time Complexity: O(N^2)
Space Complexity: O(1)

*/