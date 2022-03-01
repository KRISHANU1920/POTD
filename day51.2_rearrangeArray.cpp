// Question Link : https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1

void arrange(long long arr[], int n) 
{
    int i;
    
    //Increasing all values by (arr[arr[i]]%n)*n to store the new element.
    for(i=0; i<n; i++){
        arr[i] += (arr[arr[i]]%n)*n;
    }
    
    //Since we had multiplied each element with n.
    //We will divide by n too to get the new element at that 
    //position after rearranging.
    for(i=0; i<n; i++){
        arr[i] = arr[i]/n;
    }
}

/*

Time Complexity: O(N)
Space Complexity: O(1)

*/