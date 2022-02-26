// Question Link : https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> ans;
    int i=0, j=0;
    while(i<n && j<m)
    {
        // skip current if next is equal of arr1
        while(i+1 < n && arr1[i] == arr1[i+1])
            i++;

        // skip current if next is equal of arr2
        while(j+1 < m && arr2[j] == arr2[j+1])
            j++;
        
        // conditions for comparing both arr1 & arr2
        if(arr1[i] == arr2[j]) {
            ans.push_back(arr1[i++]);
            j++;
        }
        else if(arr1[i] < arr2[j])
            ans.push_back(arr1[i++]);
        else 
            ans.push_back(arr2[j++]);
    }
    
    // if elements remain in arr1
    while(i < n)
    {
        while(i+1 < n && arr1[i] == arr1[i+1])
            i++;
            
        ans.push_back(arr1[i++]);
    }
    
    // if elements remain in arr2
    while(j < m)
    {
        while(j+1 < m && arr2[j] == arr2[j+1])
            j++;
        
        ans.push_back(arr2[j++]);
    }
    
    return ans;
}

/*

Time Complexity: O(m+n)
Space Complexity: O(m+n)

*/