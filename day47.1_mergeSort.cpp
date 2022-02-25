// Question Link : https://leetcode.com/problems/sort-an-array/

void merge(vector<int>& nums, int left, int mid, int right)
{
    int len1 = mid - left + 1;
    int len2 = right - mid;
    
    // creating two temporary arrays
    int *first = new int[len1];
    int *second = new int[len2];
    
    // copying values to temp arrays
    int mainInd = left;
    for(int i=0; i<len1; i++)
        first[i] = nums[mainInd++];
    
    mainInd = mid+1;
    for(int i=0; i<len2; i++)
        second[i] = nums[mainInd++];
    
    // merging two sorted arrays
    mainInd = left;
    int i = 0, j = 0;
    while(i<len1 && j<len2)
    {
        if(first[i] <= second[j])
            nums[mainInd++] = first[i++];
        else
            nums[mainInd++] = second[j++];
    }
    while(i < len1)
        nums[mainInd++] = first[i++];
    while(j < len2)
        nums[mainInd++] = second[j++];
    
    // delete memory
    delete [] first;
    delete [] second;
}

void mergeSort(vector<int>& nums, int left, int right)
{
    // base case
    if(left >= right)
        return;
    
    int mid = left + (right-left)/2;
    
    // sorting left side of array
    mergeSort(nums, left, mid);
    // sorting right side of array
    mergeSort(nums, mid+1, right);
    
    // merging both the arrays
    merge(nums, left, mid, right);
}

vector<int> sortArray(vector<int>& nums) 
{
    mergeSort(nums, 0, size(nums)-1);
    return nums;
}

/*

Time Complexity: O(N.Log(N))
Space Complexity: O(N)

*/