//Given an unsorted array arr[] of size N, rotate it by D elements (clockwise).

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int N, D, i, j;
        cin >> N >> D;
        int *arr = new int [N];
        int *temp = new int [D];
        for(i=0; i<N; i++)
            cin >> arr[i];

        // store the first D elements in the temp array
        for(i=0; i<D; i++)
            temp[i] = arr[i];
        j = D;

        // Shift rest part of arr[] to forward from 0th index
        for(i=0; i<N-D; i++)
            arr[i] = arr[j++];

        // Store back D elements from the unshifted position
        for(i=N-D, j=0; i<N; i++)
            arr[i] = temp[j++];

        // Printing the result array
        for(i=0; i<N; i++)
            cout << arr[i] << " ";
        cout << "\n";
        
        delete [] arr;
        delete [] temp;
    }
    return 0;
}

/*

Time Complexity: O(N)
Space Complexity: O(D)

*/